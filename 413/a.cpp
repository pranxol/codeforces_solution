
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
    int n,t,k,d;
    sf("%d%d%d%d",&n,&t,&k,&d);
    int m1=0,m2=0,s1=0,s2=0;
    while(m1<n)
    {
        m1=m1+k;
        s1=s1+t;
    }
    if(t>d)
    {
        m2=k+k;
        s2=t+d;
    }
    else if(t<=d)
    {
        m2=(d*k)/t+2*k;
        s2=d+t;
    }
    while(m2<n)
    {
        m2=m2+k+k;
        s2=s2+t;
    }
    if(s2<s1)
        pf("YES");
    else
        pf("NO");


    return 0;
}
