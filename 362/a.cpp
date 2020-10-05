/*#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>*/
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,s,x,bark1=0,bark2=0,temp;
    scanf("%d%d%d",&t,&s,&x);
    if(x<t)
    {
        printf("NO\n");
        return 0;

    }
    if(x==t)
    {
        printf("YES\n");
        return 0;
    }
    /*if(x>t&&x<2*s)
    {
        printf("NO\n");
        return 0;
    }*/
    temp=t;
    while(bark2<x)
    {
        bark1=temp+s;
        bark2=temp+s+1;
        temp=bark1;
        if(x==bark1||x==bark2)
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
