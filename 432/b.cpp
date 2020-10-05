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
    ll ax,ay,bx,by,cx,cy;
    sf("%I64d%I64d%I64d%I64d%I64d%I64d",&ax,&ay,&bx,&by,&cx,&cy);
    ll a,b,c;
    a=((ax-bx)*(ax-bx))+((ay-by)*(ay-by));
    b=((cx-bx)*(cx-bx))+((cy-by)*(cy-by));
    c=((ax-cx)*(ax-cx))+((ay-cy)*(ay-cy));
    /*if(c==a+b)
        pf("Yes");
    else if(a==b)
        pf("Yes");
    else
        pf("No");*/
    ll res=(ax-bx)*(by-cy)-(bx-cx)*(ay-by);
    if(res==0)
        pf("No");
    else if(a==b)
        pf("Yes");
    else
        pf("No");



    return 0;
}
