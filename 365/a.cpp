#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m,c,mi=0,ni=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d",&m,&c);
        if(m>c)mi++;
        else if(c>m)ni++;
    }
    if(mi>ni)
        printf("Mishka\n");
    else if(ni>mi)
        printf("Chris\n");
    else if(mi==ni)
        printf("Friendship is magic!^^\n");

    return 0;
}
