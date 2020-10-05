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
    int n,m;

    cin>>n>>m;
    string str[n][m];
    int i,j,cnt=0;
    for(i=0;i<n;i++)
    {
        string c;
        cin>>c;
        for(j=0;j<m;j++)
        {
            str[i][j]=c[j];
            if(c[j]=='*')
            {
                cnt++;
            }
        }
    }
    int cnt2=0,r,c;
    int row[n+2],col[m+2];
    for(i=0;i<n;i++)
    {
        row[i]=0;
        for(j=0;j<m;j++)
        {
            if(str[i][j]=="*")
                row[i]+=1;

        }
    }
    for(j=0;j<m;j++)
    {
        col[j]=0;
        for(i=0;i<n;i++)
        {
            if(str[i][j]=="*")
                col[j]+=1;
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cnt2=row[i]+col[j]-(str[i][j]=="*");
            ///if(str[i][j]=="*")
               /// cnt2-=1;
            if(cnt2==cnt)
            {
                printf("YES\n");
                printf("%d %d",i+1,j+1);
                return 0;
            }
        }
    }
    printf("NO\n");

    return 0;
}
