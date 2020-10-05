#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define pb push_back
#define pob pop_back
#define infinity 2147483647
#define pii pair<int,int>
#define ff first
#define ss second
#define maxi 1005
int a[55][55];
ll twopower[55];
int main()
{
    int n,m,r0[55],r1[55],c0[55],c1[55];
    for(int i=1;i<=50;i++)
    {
        r0[i]=0;r1[i]=0;c0[i]=0;c1[i]=0;
    }
    sf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            sf("%d",&a[i][j]);
            if(a[i][j]==0)
            {
                r0[i]++;
                c0[j]++;
            }
            else
            {
                r1[i]++;
                c1[j]++;
            }
        }
    }
    twopower[0]=1;
    twopower[1]=2;
    for(int i=2;i<=50;i++)
    {
        twopower[i]=twopower[i-1]*2;
    }
        ll res=0;
        res=(-1)*(ll)(n*m);
        for(int i=1;i<=n;i++)
        {
            res=res+twopower[r0[i]]-1;
            res=res+twopower[r1[i]]-1;
        }
        for(int i=1;i<=m;i++)
        {
            res=res+twopower[c0[i]]-1;
            res=res+twopower[c1[i]]-1;
        }
        pf("%lld",res);

    return 0;
}
