#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
///#include<bits/stdc++.h>
using namespace std;


int main()
{
    char c[5];
    long long int a,b;
    long long int n,x,d,i ,cnt=0;
    scanf("%I64d %I64d",&n,&x);
    for(i=1;i<=n;i++)
    {
        getchar();
        scanf("%c %I64d",&c[0],&a);
        if(c[0]=='-')
            a=a*(-1);
        d=a;
        x=x+d;
        if(x<0)
        {
            cnt++;
            x=x-d;
        }
    }
    printf("%I64d %I64d",x,cnt);
    return 0;
}





