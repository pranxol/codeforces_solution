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
};

int cmp(obj a1, obj a2)
{
    double x = (double)a1.c / a1.w;
    double y = (double)a2.c / a2.w;
    return x<y;
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
        //a[i].r=(double)(a[i].c/a[i].w);
    }
    sort(a,a+n,cmp);
    /*for(int i=0;i<n;i++)
    {
        pf("%d  %d ",a[i].c,a[i].w);
    }
    pf("\n");*/
    int taken=0;
    double cost=0.0;
    for(int i=0;i<n;i++)
    {
        if(taken == m)
            break;
        if(taken+a[i].w<=m)
        {
            taken+=a[i].w;
            //pf("a[%d].c=%d  ",i,a[i].c);
            double ss=0.0+a[i].c;
            pf("%lf",ss);
            cost=(double)(cost+a[i].c);
            //pf("i=%d taken=%d cost=%d\n",i,taken,a[i].c);
        }
        else
        {
            int baki=m-taken;
            taken=m;
            double unit=a[i].c/a[i].w;
            cost=cost+(double)unit*baki;

            //pf("a[%d].c=%d  ",i,a[i].c);
            //pf("i=%d taken=%d cost=%lf\n",i,baki,unit*baki);
        }
    }
    pf("%lf",cost);

    return 0;
}
