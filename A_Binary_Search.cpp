#include <iostream>
using namespace std;

int bs(int a[],int z,int s)
{
    int l,r,mid;
    l=0;
    r=s-1;
    mid=(l+r)/2;
    while(l<=r)
    {
        if(a[mid]==z) return mid;
        else if(a[mid]<z)
        {
            l=mid+1;
            mid=(l+r)/2;
        }
        else
        {
            r=mid-1;
            mid=(l+r)/2;
        }
    }
    return -1;
}

int main()
{
    int n,c,b;
    cin>>n;
    int z;
    cin>>z;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(z--)
    {
        cin>>c;
        b=bs(a,c,n);
        if(b!=-1)
        {
            cout<< "YES\n";
        }
        else cout<< "NO\n";
    }

    return 0;
}
