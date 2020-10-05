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
    int n;
    double k,sum=0;
    sf("%d%lf",&n,&k);
    int a[n+2];
    for(int i=1;i<=n;i++)
    {
        sf("%d",&a[i]);
        sum=sum+a[i];
    }
    if((sum/n)+0.5>=k)
    {
        pf("0\n");
        return 0;
    }
    int m=n;
    for(int i=1;;i++)
    {
        m++;
        sum=sum+k;
        if((sum/m)+0.5>=k)
        {
            pf("%d\n",i);
            break;
        }
    }


    return 0;
}
