#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define pb push_back
#define infinity 2147483647
#define pii pair<int,int>
#define mp make_pair
#define mx 100009

struct obj
{
    int c,w;
    double r;
};
int cmp(obj a1, obj a2)
{
    double x = (double)a1.c / a1.w;
    double y = (double)a2.c / a2.w;
    return x > y;
}

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);
    obj a[5008];
    int n,m;
    sf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        sf("%d%d",&a[i].c,&a[i].w);
    }
    sort(a,a+n,cmp);
    int taken=0;
    double cost=0.0;
    for(int i=0;i<n;i++)
    {
        if(taken == m)
            break;
        if(taken+a[i].w<=m)
        {
            taken+=a[i].w;
            cost+=a[i].c;
        }
        else
        {
            int baki=m-taken;
            taken=m;
            int unit=a[i].c/a[i].w;
            cost+=unit*baki;
        }
    }
    pf("%lf",cost);

    return 0;
}

