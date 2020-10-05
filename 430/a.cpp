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
int main()
{
    ll l,r,x,y,k,a,b;
    sf("%I64d%I64d%I64d%I64d%I64d",&l,&r,&x,&y,&k);
    //pf("%d %d %d %d %d",l,r,x,y,k);
    for(int i=x;i<=y;i++)
    {
        ll res=k*i;
        if(l<=res&&res<=r)
        {
            printf("YES");
            return 0;
        }
    }
    pf("NO");

    return 0;
}
