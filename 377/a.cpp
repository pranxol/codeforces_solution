#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)


int main()
{
    int k,r;
    sf("%d %d",&k,&r);
    int i,m=k;

    for(int i=1;i<=10;i++)
    {
        int rem=k%10;
        if(rem==0||rem==r)
        {
            pf("%d",i);
            return 0;
        }
        k=m*(i+1);
    }
    pf("11");
    return 0;
}
