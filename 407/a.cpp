#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define infinity 2147483647



int main()
{
    int n,i,res,x[n],y[n];
    sf("%d",&n);

    for(i=0;i<n;i++)
    {
        sf("%d%d",&x[i],&y[i]);
        res=x[i]-y[i];
        pf("%d\n",res);
    }
    return 0;
}
