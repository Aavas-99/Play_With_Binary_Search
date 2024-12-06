#include <iostream>
#include <algorithm>
using namespace std;

int lb(int* a,int s,int z)
{
    int l,r,mid,res;
    l=0;
    r=s-1;
    res=s;
    mid=(l+r)/2;
    while(l<=r)
    {
        if(a[mid]<z)
        {
            l=mid+1;
            mid=(l+r)/2;
        }
        else
        {
            r=mid-1;
            res=mid;
            mid=(l+r)/2;
        }
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    int z,q;
    cin>>z;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    while(z--)
    {
        cin>>q;
        cout << lb(a,n,q)+1 << endl;
    }
}
