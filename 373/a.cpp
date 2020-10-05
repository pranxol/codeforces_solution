#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)

int main()
{
    int n,a[95];
    sf("%d",&n);
    for(int i=0;i<n;i++)
    {
        sf("%d",&a[i]);
    }
    if(a[n-1]==0)
        pf("UP");
    else if(a[n-1]==15)
        pf("DOWN");
    else if(n==1)
        pf("-1");
    else if(a[n-1]>a[n-2])
        pf("UP");
    else if(a[n-1]<a[n-2])
        pf("DOWN");

    return 0;
}
