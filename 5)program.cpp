#include<conio.h>
#include<iostream>
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
    for(int i=0;i<5;i++)
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl<<"The value  priority queue is in descending order  so it is max heap"<<endl;
    getch();
    return 0;
}
