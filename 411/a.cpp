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
    int a,b;
    sf("%d%d",&a,&b);
    if(a==b)
    {
        int cnt=0;
        for(int i=2;i<=sqrt(a)+1;i++)
        {
            if(a%i==0)
            {
                pf("%d\n",i);
                cnt=1;
                return 0;
            }

        }
        if(cnt==0)
        {
            pf("%d\n",a);
            return 0;
        }
    }
    pf("2\n");

    return 0;
}
