#include<conio.h>
#include<iostream>
#include<queue>

using namespace std;

void sum(int ar[],int n,int k)
{
    int s=0;
    priority_queue<int>q;
    for(int i=0;i<n;i++)
    {
       q.push(ar[i]);
    }
    for(int i=1;i<n;i++)
    {
        s=s+q.top();
        if(s>=k)
        {
            cout<<i;
            return;
        }
        q.pop();
    }
    cout<<"-1";
}

int main()
{
    int arr[]={1,2,2, 2, 3, 4, 5, 4, 7, 6, 5, 12};
    int k=70;
    sum(arr,12,k);
    getch();
    return 0;
}
