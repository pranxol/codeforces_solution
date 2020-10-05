#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define pb push_back
#define infinity 2147483647
#define pii pair<int,int>
#define ff first
#define ss second
#define mx 1005


int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);
    int n;
    int a,b;
    sf("%d%d%d",&n,&a,&b);
    int i=0,mul=0,baki,rem,j;
    while(mul<=n)
    {
        mul=a*i;
        baki=n-mul;
        rem=baki%b;
        if(rem==0)
        {
            j=baki/b;
            if(i>=0&&j>=0)
            {
                printf("YES\n");
                printf("%d\n%d",i,j);return 0;
            }


        }
        i++;
    }
    printf("NO\n");

    return 0;
}
