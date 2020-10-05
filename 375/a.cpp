#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b&&a<=c||a<=b&&a>=c)
    {
        int sum=c-b;
        if(sum<0)
            pf("%d",-sum);
        else
            pf("%d",sum);
    }
    else if(b>=a&&b<=c||b<=a&&b>=c)
    {
        int sum=c-a;
        if(sum<0)
            pf("%d",-sum);
        else
            pf("%d",sum);
    }
    else
    {
        int sum=a-b;
        if(sum<0)
            pf("%d",-sum);
        else
            pf("%d",sum);

    }
    return 0;
}
