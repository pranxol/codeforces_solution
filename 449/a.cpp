#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define pb push_back
#define infinity 2147483647
#define pii pair<int,int>
#define ff first
#define ss second
#define mx 1005


int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);

    int n,m;
    sf("%d%d\n",&n,&m);
    char s[n+3];
    for(int i=1;i<=n;i++)
    {
        sf("%c",&s[i]);
    }

    for(int i=1;i<=m;i++)
    {
        int l,r;
        char a,b;
        sf("%d%d %c %c",&l,&r,&a,&b);
        for(int j=l;j<=r;j++)
        {
            if(s[j]==a)
                s[j]=b;
        }
    }
    for(int i=1;i<=n;i++)
    {
        pf("%c",s[i]);
    }
    return 0;
}
