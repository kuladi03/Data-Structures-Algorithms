#include<bits/stdc++.h>
using namespace std;

void linearsearch(int arr[],int key,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<i;
            break;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key ;
    cin>>key;
    linearsearch(arr,key,n);
    return 0;
}