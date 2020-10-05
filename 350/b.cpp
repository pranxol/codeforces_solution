
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;


int main()
{
    long long mx=100005;
    int cnt=0;
    long long int n,k,p=1,i,j,pp;
    long long  s[100005];
    scanf("%lld%lld",&n,&k);

    for(i=1;i<=n;i++)
    {
        scanf("%lld",&s[i]);
        for(j=1;j<=i;j++)
        {
            pp=s[j];
            if(p==k)
            {
                cnt=1;
                break;
            }
            p++;

        }
        if(cnt==1)
        {
            break;
        }
    }
    printf("%lld",pp);
    return 0;
}

