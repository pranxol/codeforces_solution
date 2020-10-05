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
    int n;
    cin>>n;
    int dist[n],dif;
    string dir;
    cin>>dir;
    for(int i=0;i<n;i++)
    {
        cin>>dist[i];
    }
    int j=0,mini=2147483640;
    for(int i=0;i<n;i++)
    {
        if(dir[i]=='R'&&dir[i+1]=='L')
        {
            dif=(dist[i+1]-dist[i])/2;
            if(dif<mini)
                mini=dif;
        }
    }
    if(mini==2147483640)
    {
        printf("-1\n");
    }
    else
    printf("%d",mini);

    return 0;
}
