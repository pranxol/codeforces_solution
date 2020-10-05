#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define max 1000000
int num[max];

int main()
{
    ll n,x;
    sf("%I64d %I64d",&n,&x);
    ll cnt=0,rem;
    int a[n],b;
    memset(num,0,sizeof(num));
    for(int i=0;i<n;i++)
    {
        sf("%d",&b);
        a[i]=b;
        num[b]++;
    }
    for(int i=0;i<n;i++)
    {
        rem=a[i]^x;
        cnt+=num[rem];
    }
    if(x)
        pf("%I64d",cnt/2);
    else
        pf("%I64d",(cnt-n)/2);

    return 0;
}
