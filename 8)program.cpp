#include<conio.h>
#include<iostream>
#include<queue>
#include<forward_list>
using namespace std;

void f1(int arr[],int n)//arr[] = { 3, 5, 2, 7 } ,{1} ,[1]

{
    int max1,max2,d;
    forward_list<int>ar;
    priority_queue<int>q;
    for(int i=0;i<n;i++)
    {
        ar.push_front(arr[i]);
        q.push(arr[i]);
    }
    while(1)
    {
        if(distance(ar.begin(),ar.end())==1)
        {
            if(ar.front()==1)
            {
                cout<<ar.front();
                return;
            }
            else{
                cout<<"-1";
                return;
            }
        }
        else{
            max1=q.top();
            q.pop();
            max2=q.top();
            q.pop();
            ar.remove(max1);
            ar.remove(max2);
            d=max1-max2;
            q.push(d);
            ar.push_front(d);

        }
    }
}

int main()
{
   int arr[] = { 3, 5, 2, };
   f1(arr,4);
   getch();
   return 0;

}
