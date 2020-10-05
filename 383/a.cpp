#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)


int main()
{
    int n;
    sf("%d",&n);
    int rem=n%4;
    if(n==0)
        pf("1");
    else if(rem==1)
        pf("8");
    else if(rem==2)
        pf("4");
    else if(rem==3)
        pf("2");
    else if(rem==0)
        pf("6");

    return 0;
}
