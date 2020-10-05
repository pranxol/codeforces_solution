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
    int n,m;
    sf("%d%d",&n,&m);
    vector<int >p,v;
    p.pb(0);
    for(int i=1;i<=n;i++)
    {
        int number;
        sf("%d",&number);
        p.pb(number);
    }
    int l,r,x;
    for(int i=1;i<=m;i++)
    {
        v=p;
        sf("%d%d%d",&l,&r,&x);
        sort(v.begin()+l,v.begin()+r+1);
        //for(int j=1;j<=n;j++)
            //pf("%d ",v[j]);
        //pf("\n");
        if(v[x]==p[x])
            pf("Yes");
        else
            pf("No");
        pf("\n");
    }
    return 0;
}
