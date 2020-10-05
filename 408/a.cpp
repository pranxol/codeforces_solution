#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define infinity 2147483647



int main()
{
    int n,m,k,temp=100000;
    sf("%d%d%d",&n,&m,&k);
    int a[n+2];
    for(int i=1;i<=n;i++)
    {
        sf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++)
    {
        if(i==m||a[i]==0)
            continue;
        int dis=abs(m-i);
        if(a[i]<=k&&dis<temp)
            temp=dis;

    }
    pf("%d",10*temp);
    return 0;
}
