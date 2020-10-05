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
    int d,i,n,j,cnt,win[101];
    char eachday[102];
    scanf("%d%d",&n,&d);
    cnt=1;int w=1;
    win[1]=0;
    for(i=1;i<=d;i++)
    {
        scanf("%s",&eachday);
        for(j=0;j<n;j++)
        {
            if(eachday[j]=='0')
            {
                cnt=0;
                break;
            }
        }

        if(cnt==0)
        {
            win[w]=win[w]+1;
        }
        else
        {
            w=w+1;
            win[w]=0;
        }
        cnt=1;
    }
    int temp=0;
    for(i=1;i<=w;i++)
    {
        //printf("%d",win[i]);
        if(win[i]>=temp)
            temp=win[i];
    }
    printf("%d",temp);
    return 0;
}
