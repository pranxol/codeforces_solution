
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)


int main()
{
    int n,a,b;
    while(~sf("%d %d %d",&n,&a,&b))
    {
        char c[n+5];
        sf("%s",&c);

        if(c[a-1]==c[b-1])
            pf("0\n");
        else
            pf("1\n");
    }


    return 0;
}
