#include<bits/stdc++.h>
#include<sys/time.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define infinity 2147483647

ll mod=1e9+7;


///in doing mod all variable should be in long long
///for safety

ll bigmod(ll a,ll b)
{
    if(b==0)
        return 1;
    if(b%2==0)
    {
        ll res=bigmod(a,b/2);
        return ((res%mod)*(res%mod))%mod;/// this line
    }
    else
    {
        return ((a%mod)*(bigmod(a,b-1))%mod)%mod;///this line
    }
}
int main()
{
    ll a,b,k;
    sf("%lld%lld%lld",&a,&b,&k);
    if(((a+b)&1ll)&& (k==-1))
    {
        printf("0");
        return 0;
    }

    ll result = bigmod(bigmod(2ll,a-1),b-1);
    pf("%lld",result);

    return 0;
}
