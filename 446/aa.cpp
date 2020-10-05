#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);
    vector<int>can;
    int n;
    ll x,sum=0,cansum=0;
    sf("%d",&n);
    for(int i=0;i<n;i++)
    {
        sf("%lld",&x);
        sum=sum+x;
    }
    int y;
    for(int i=0;i<n;i++)
    {
        sf("%d",&y);
        can.push_back(y);
    }
    sort(can.begin(),can.end());
    reverse(can.begin(),can.end());
    cansum=can[0]+can[1];
    if(cansum>=sum)
        pf("YES");
    else
        pf("NO");
    return 0;
}
