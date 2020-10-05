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
    int n,k;
    sf("%d%d",&n,&k);
    int rest=k;
    int carry=0;
    int a[108];
    for(int i=1;i<=n;i++)
        sf("%d",&a[i]);

    for(int i=1;i<=n;i++)
    {
        a[i]=a[i]+carry;
        carry=0;
        if(a[i]>8)
        {
            rest=rest-8;
            carry=a[i]-8;
        }

        else
            rest=rest-a[i];

        if(rest<=0)
        {
            pf("%d",i);
            return 0;
        }
    }

    pf("-1");


    return 0;
}
