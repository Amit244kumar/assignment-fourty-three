#include<conio.h>
#include<iostream>
#include<queue>

using namespace std;

void  Merge(int ar1[],int ar2[],int m,int n,priority_queue<int>&q)
{

    for(int i=0;i<m;i++)
    {
        q.push(ar1[i]);
    }
    for(int i=0;i<n;i++)
    {
        q.push(ar2[i]);
    }
   cout<<endl;
}

int main()
{

    int arr1[]={5,6,4,6,7,8};
    int arr2[]={5,7,8,9,9,8,9};
     priority_queue<int>q;
    cout<<"first array"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl<<"second array"<<endl;
    for(int i=0;i<7;i++)
    {
        cout<<arr2[i]<<" ";
    }
    Merge(arr1,arr2,6,7,q);
    while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    return 0;
}
