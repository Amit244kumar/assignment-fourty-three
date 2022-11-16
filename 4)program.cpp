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
    priority_queue<int>q1;
    priority_queue<int>q2;
    int f;
    cout<<"Enter 5 elements in the first priority queue"<<endl;
    for(int i=0;i<5;i++)
    {
       cin>>f;
       q1.push(f);
    }
    cout<<"Enter 7 elements in the second priority queue"<<endl;
    for(int i=0;i<7;i++)
    {
       cin>>f;
       q2.push(f);
    }
    cout<<"The first priority queue"<<endl;
    printPrioQueu(q1,q1.size());
    cout<<endl<<"the second priority queue"<<endl;
    printPrioQueu(q2,q2.size());
    q1.swap(q2);
    cout<<endl<<"The first priority queue after swap"<<endl;
    printPrioQueu(q1,q1.size());
    cout<<endl<<"the second priority queue after swap"<<endl;
    printPrioQueu(q2,q2.size());
    getch();
    return 0;
}
