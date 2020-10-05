#include<bits/stdc++.h>
#include<sys/time.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define infinity 2147483647

#define arrsize 1000005
bool flag[arrsize+5];
int primes[arrsize+5];
void sieve(int n)
{
    int i,j;
    flag[0]=0,flag[1]=0;
    flag[2]=1;
    for(i=3;i<=n;i+=2) flag[i]=1;

    for(i=4;i<=n;i+=2) flag[i]=0;

    int limit=sqrt(n)+1;
    for(i=3;i<limit;i+=2)
    {
        if(flag[i])
        {
            for(j=i;i*j<=n;j+=2)
            {


                flag[i*j]=0;
            }
        }
    }

    /*primes[0]=2;
    ///printf("%d\n",primes[0]);
    for(i=3,j=1;i<=n;i=i+2)
    {
        if(flag[i])
        {
            primes[j]=i;
            printf("%d,",primes[j]);
            j++;
        }
    }*/
}

int main()
{
    int n=1000004;
    sieve(n);
    int a,b,c,i;
    sf("%d",&a);
    for(i=1;i<=1000;i++)
    {
       if(flag[a*i+1]==0)
       {
           pf("%d\n",i);
           return 0;
       }

    }
    return 0;
}

