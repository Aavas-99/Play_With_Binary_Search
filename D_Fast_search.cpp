#include<bits/stdc++.h>
using namespace std;

int lb(int* a,int s,int t)
{
    int l,h,mid,res;
    l=0;
    h=s;
    mid=(l+h)/2;
    res=s;
    while(l<h)
    {
        if(a[mid]<t)
        {
            l=mid+1;
            mid=(l+h)/2;
        }
        else
        {
            h=mid;
            res=mid;
            mid=(l+h)/2;
        }
    }
    return l;
}


int ub(int* a,int s,int t)
{
    int l,h,mid,res;
    l=0;
    h=s;
    mid=(l+h)/2;
    res=s;
    while(l<h)
    {
        if(a[mid]<=t)
        {
            l=mid+1;
            mid=(l+h)/2;
        }
        else
        {
            h=mid;
            mid=(l+h)/2;
            res=mid;
        }
    }
    return l;
}

int main()
{
    int n,val;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int q,l,r;
    cin>>q;
    while(q--)
    {
        cin>>l>>r;
        cout<< ub(arr,n,r)-lb(arr,n,l) << " ";
    }
}
