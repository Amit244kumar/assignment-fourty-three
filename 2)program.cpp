#include<iostream>
#include<conio.h>
#include<queue>

using namespace std;
void printPrioQueu(priority_queue<int>q,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<q.top()<<" ";
        q.pop();
    }
}
int main()
{
    int f;
    priority_queue<int>q1;
    cout<<"Add 5 elements to the priority queue"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>f;
        q1.push(f);
    }
    cout<<endl<<"The priority queue elements "<<endl;
    printPrioQueu(q1,q1.size());
    q1.pop();
    cout<<endl<<"The priority queue after deletion of first elements"<<endl;
    printPrioQueu(q1,q1.size());
    cout<<endl<<"The size of priority queue"<<endl;
    cout<<q1.size();
    getch();
    return 0;
}
