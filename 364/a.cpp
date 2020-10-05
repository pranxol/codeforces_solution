#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);
    int n;
    scanf("%d",&n);
    int a[n],tot=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        tot=tot+a[i];
    }
    int lim=n/2;
    int avg=(tot/lim);
    //printf("%d\n",avg);
    for(int i=1;i<=n;i++)
    {
        if(a[i]!=-1)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(a[j]!=-1&&a[i]+a[j]==avg)
                {
                    printf("%d %d\n",i,j);
                    a[j]=-1;
                    a[i]=-1;
                    break;
                }
            }
        }

    }

    return 0;
}

