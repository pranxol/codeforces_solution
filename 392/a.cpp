
#include<bits/stdc++.h>
#include<sys/time.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define infinity 2147483647

int main()
{
    int n;
    sf("%d",&n);
    int ara[n+5];
    int mx=0;
    for(int i=0;i<n;i++)
    {
        sf("%d",&ara[i]);
        if(ara[i]>mx)
            mx=ara[i];
    }
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+mx-ara[i];
    }
    pf("%lld\n",sum);
    return 0;
}
