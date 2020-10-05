#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,value,ara[30],i;
    char ch;

    for(i=1;i<27;i++)
    {
        ara[i]=-1;
    }
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
       scanf("%c",&ch);
       value=(int)ch-96;

       ara[value]=ara[value]+1;
    }
    //printf("%d\n",value);
    //printf("%d\n",ara[value]);
    int cnt=0,tot=0;
    for(i=1;i<27;i++)
    {

        if(ara[i]>-1)
        {
            tot=tot+ara[i];
            cnt++;
        }
    }
    int neww=cnt+tot;
    if(neww>26)
    {
        printf("-1");
        return 0;
    }
    printf("%d",tot);

    return 0;
}
