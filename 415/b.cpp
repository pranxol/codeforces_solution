#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define pb push_back
#define pob pop_back
#define infinity 2147483647
//freopen ("input.txt", "r", stdin);
//freopen ("output.txt", "w", stdout);
int main()
{
    long long n,f, x,y,sum=0;
    sf("%lld%lld",&n,&f);
    vector<long long>v;
    pair<ll,ll>p[n+2];
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        sf("%lld%lld",&x,&y);
        if(x<y&&x>0)
        {
            sum=sum+x;
            if(x*2<=y)
            {
                v.pb(x*2);
                p[cnt++].first=x*2;
                p[cnt].second=x;
            }

            else if(x*2>y)
            {
                v.pb(y);
                p[cnt++].first=y;
                p[cnt].second=x;
            }

        }
        else if(x>0&&x>=y)
            sum=sum+y;
    }
    ll res=0;
    sort(v.begin(),v.end());
    ll pos=v.size()-1;
    for(int i=1;i<=f;i++)
    {
        res=res+v[pos];
        pos--;
    }
    res=res+sum;
    pf("%lld",sum);
    return 0;
}
