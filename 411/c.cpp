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
    int n;
    sf("%d",&n);
    if(n==1)
    {
        pf("0");
        return 0;
    }

    int ans=(n-2)/2+n%2;
    pf("%d",ans);

    return 0;
}
