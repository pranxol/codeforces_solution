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
    ll a,b,c;
    sf("%lld",&a);
    if(a==1 or a==2)
    {
        pf("-1\n");
        return 0;
    }
    if(a%2==0)
    {
//        b=sqrt((((a*a)/4+1)*((a*a)/4+1))-a*a);
//        c=sqrt(a*a+b*b);
        b=(a*a)/4-1;
        c=(a*a)/4+1;
    }
    else if(a%2==1)
    {
        //b=sqrt((((a*a+1)/2)*((a*a+1)/2))-a*a);
        //c=sqrt(a*a+b*b);
        b=(a*a-1)/2;
        c=(a*a+1)/2;
    }
    pf("%lld %lld\n",b,c);
    return 0;
}
