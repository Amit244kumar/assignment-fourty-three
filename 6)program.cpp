#include<iostream>
#include<conio.h>
#include<queue>

using namespace std;



int main()
{
    int f;
    priority_queue<int>q;
    for(int i=0;i<5;i++)
    {
        cin>>f;
        q.push(f);
    }
    int ar[q.size()];
    for(int i=q.size()-1;i>=0;i--)
    {
        ar[i]=q.top();
        q.pop();
    }
    cout<<"The priority is implement as min heap"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<ar[i]<<" ";

    }
    getch();
    return 0;
}
