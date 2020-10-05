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
    ll n,k;
    sf("%lld %lld",&n,&k);
    ll a=n/k;
    ll rem=a%2;
    if(rem==1)
        printf("YES");
    else
        printf("NO");



    return 0;
}
