#include<bits/stdc++.h>
using namespace std;


#define SIZE_N 100000
#define SIZE_P 100000

bool flag[SIZE_N+5];
int primes[SIZE_P+5];

int seive()
{
	int i,j,total=0,val;

	for(i=2;i<=SIZE_N;i++) flag[i]=1;

    	val=sqrt(SIZE_N)+1;

	for(i=2;i<val;i++)
        	if(flag[i])
            		for(j=i;j*i<=SIZE_N;j++)
                		flag[i*j]=0;

    for(i=2;i<=SIZE_N;i++)
       	if(flag[i])
            		primes[total++]=i;

	return total;
}

int divisor(int N)
{
    	int i,val,count,sum;

    	val=sqrt(N)+1;
    	sum=1;
    	for(i=0;primes[i]<val;i++)
    	{
       	if(N%primes[i]==0)
        	{
            		count=0;
            		while(N%primes[i]==0)
            		{
                		N/=primes[i];
                		count++;
            		}
            		sum*=(count+1);
        	}
    	}
    	if(N>1)
       	sum=sum*2;
    	return sum;
}



int ara[1000000];
int main()
{
    int t;

    //scanf("%d",&t);
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }


    return 0;
}
