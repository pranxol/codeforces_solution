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
    int n,m;
    sf("%d%d",&n,&m);
    map<string,int>mpn,mpm;
    string sn[n+2],sm[m+2];
    for(int i=1;i<=n;i++)
    {
        cin>>sn[i];
        mpn[sn[i]]=-1;
    }
    int cnt=0;
    for(int i=1;i<=m;i++)
    {
        cin>>sm[i];
        if(mpn[sm[i]]!=-1)
            cnt++;
        mpm[sm[i]]=-1;
    }
    if(n>m)
    {
        pf("YES\n");
        return 0;
    }
    if(n<m)
    {
        if(cnt>=n)
        {
            pf("NO\n");
            return 0;
        }
        else
        {
            pf("YES\n");
            return 0;
        }
    }
    if(cnt==m)
    {
        pf("NO\n");
        return 0;
    }
    if(cnt<n/2)
    {
        pf("NO\n");
        return 0;
    }
    pf("YES\n");

    return 0;
}

