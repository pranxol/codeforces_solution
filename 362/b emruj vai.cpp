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
    i=0;

    stringstream ss;
    ss << a;
    string A = ss.str();
    int pwr=b;
   while(pwr&&i<str.size())
   {
       pwr--;
       A+=str[i];
       i++;
   }
   if(pwr==0)
   {
       if(i==str.size()||(str.size()==1&&str[0]=='0'))
        cout<<A<<endl;
       else
       {
           A+='.';
           while(i<str.size())
           {
               A+=str[i];
               i++;
           }
           cout<<A<<endl;
       }
   }
   else
   {
       while(pwr--)
       {
           A+='0';
       }
       cout<<A<<endl;
   }

    return 0;


}
