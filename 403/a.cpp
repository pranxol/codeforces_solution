#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define infinity 2147483647



int main()
{
    int n,x,table=0,maxi=0;
    sf("%d",&n);
    n=n*2;
    map<int,int>m;
    for(int i=1;i<=n;i++)
    {
        sf("%d",&x);
        if(m[x]==0)
        {
            table++;
            m[x]=1;
            if(table>maxi)
                maxi=table;
        }
        else if(m[x]==1)
        {
            table--;
        }
    }
    pf("%d\n",maxi);
    return 0;
}
/*
3
2
1
1
3
2
3*/
