#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)


int main()
{
    int n,k;
    sf("%d %d",&n,&k);
    int a[n+3],b[n+3];
    int tot=0,totb=0;
    /*if(k%2==1)
    {
        int newk=k+1;
        int sm=newk/2-1;
        int ln=newk/2+1;
    }
    else if(k%2==0)
    {

    }*/

    for(int i=1;i<=n;i++)
    {
        sf("%d",&a[i]);
        tot=tot+a[i];
        b[i]=a[i];
        if(i>1)
        {
            int h=b[i-1]+b[i];
            if(h<=k)
                b[i]=b[i]+k-h;
        }
        totb=totb+b[i];
    }
    int extra=totb-tot;
    pf("%d\n",extra);
    for(int i=1;i<=n;i++)
    {
        pf("%d",b[i]);
        if(i!=n)
            pf(" ");
    }

    return 0;
}
