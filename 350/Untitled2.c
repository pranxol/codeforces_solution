#include<stdio.h>
#include<string.h>
int main()
{
    long long n,i,k;
    char  s[1000];
    scanf("%lld%lld",&n,&k);

    for(i=0;i<=n;i++)
    {
        scanf("%c",&s[i]);
    }
    puts(s);



    return 0;

}
