#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);
    long long int l1,l2,r1,r2,k,res;
    sf("%I64d %I64d %I64d %I64d %I64d",&l1,&r1,&l2,&r2,&k);
    if(l2>r1||r2<l1)
    {
        res=0;
    }

    else if(l2<=l1)
    {
        if(r2>=r1)
        {
            if(k<=r1&&k>=l1)
                res=r1-l1;
            else
                res=r1-l1+1;
        }
        else if(r2<r1)
        {
            if(k<=r2&&k>=l1)
                res=r2-l1;
            else if(k>r2)
                res=r2-l1+1;
            else if(k<l1)
                res=r2-l1+1;
        }
    }
    else if(l2>l1)
    {
        if(r2<=r1)
        {
            if(k<=r2&&k>=l2)
                res=r2-l2;
            else
                res=r2-l2+1;
        }
        else if(r2>r1)
        {
            if(k>=l2&&k<=r1)
                res=r1-l2;
            else
                res=r1-l2+1;
        }
    }

    printf("%I64d\n",res);

    return 0;
}
