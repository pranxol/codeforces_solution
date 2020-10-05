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
    double r=0.00,d=0.00,dis=0.00,ri=0.00,x=0.00,y=0.00;
    sf("%lf%lf",&r,&d);
    int t;
    sf("%d",&t);
    int cnt=0;
    for(int i=1;i<=t;i++)
    {
        sf("%lf%lf%lf",&x,&y,&ri);
        double dis=sqrt((x*x)+(y*y));
        if((dis-ri>=r-d)&&(dis+ri)<=r)
        {
            cnt++;
        }
    }
    pf("%d",cnt);
    return 0;
}
