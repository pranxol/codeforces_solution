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
    char d[105];
    string str;
    int a,b,i,j;
    scanf("%d.%[0-9]e%d",&a,&d,&b);
    //cout<<a<<endl;
    //cout<<d<<endl;
    //cout<<b<<endl;
    int zero=0,charsize=0;
    //charsize=sizeof(d);*/
    for(int i=0;d[i]!='\0';i++)
    {
        str=str+d[i];
        charsize++;
        if(d[i]=='0')
        zero++;
    }

    //cout<<charsize<<endl;
    if(a==0&&zero==charsize&&b==0)
    {
        printf("0");
        return 0;
    }
    if(a==0&&zero!=charsize&&b==0)
    {
        printf("0.");
        cout<<str;
        return 0;
    }
    if(a==0&&zero!=charsize&&b!=0)
    {
        for(i=0;i<b;i++)
            cout<<str[i];
            if(b<charsize)
            printf(".");
        for(int j=i;j<charsize;j++)
            cout<<str[j];
        return 0;
    }
    if(a!=0&&zero==charsize)
    {
        printf("%d",a);
        for(i=0;i<b;i++)
            printf("0");
        return 0;
    }
    if(a!=0&&zero!=charsize)
    {
        printf("%d",a);
        if(b==charsize)
        {
            for(i=0;i<b;i++)
            cout<<str[i];
        }

        else if(b<charsize)
        {
            for(i=0;i<b;i++)
            cout<<str[i];
            printf(".");
            for( j=i;j<charsize;j++)
                cout<<str[j];
        }
        else if(charsize<b)
        {
            for(i=0;i<charsize;i++)
            cout<<str[i];
            //printf(".");
            for( j=i;j<b;j++)
                cout<<"0";

        }


        return 0;
    }


}
