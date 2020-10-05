#include<stdio.h>
#include<iostream>
using namespace std;


int main()
{
    int y,res,rem,mi=0,ma;
    scanf("%d",&y);
    res=y/7;
    rem=y%7;
    //for min
    if(rem==0)
    {
        ma=res*2;
    }
    if(rem==1)
    {
        ma=(res*2)+1;
    }
    if(rem>1)
    {
        ma=(res*2)+2;
    }
    if(rem<6)
    {
        mi=res*2;
    }
    else
    {
        mi=res*2+1;
    }

    printf("%d %d",mi,ma);

    return 0;
}
