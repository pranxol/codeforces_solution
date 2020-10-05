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
#define MAX 1005
int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);
    ll n,k,t;
    sf("%I64d%I64d%I64d",&n,&k,&t);
    if(t<=k)
    {
        cout<<t;
        //return 0;
    }
    else if(t>k&&t<=n)
    {
        cout<<k;
    }
    else if(t>n)
    {
        cout<<n+k-t;
    }


    return 0;
}
