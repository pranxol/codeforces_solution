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
    int r,d,dis,ri,x,y;
    sf("%d%d",&r,&d);
    int t;
    sf("%d",&t);
    int cnt=0;
    for(int i=1;i<=t;i++)
    {
        sf("%d%d%d",&x,&y,&ri);
        int dis=((x*x)+(y*y));
        if((dis>=((ri+r-d)*(ri+r-d)))&&(dis)<=((r-ri)*(r-ri)))
        {
            cnt++;
        }
    }
    pf("%d",cnt);
    return 0;
}
