#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define infinity 2147483647



int main()
{
    int a,b,i=0;
    sf("%d %d",&a,&b);
    while(a<=b)
    {
        a=a*3;
        b=b*2;
        i++;
    }
    pf("%d\n",i);

    return 0;
}
