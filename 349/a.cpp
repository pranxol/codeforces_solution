
#include<stdio.h>
#include<iostream>
#define pi 3.141592654
using namespace std;
int main()
{
    int d,h,v,e;
    double nh=0.0,r=0.0,k=0.0;
	scanf("%d %d %d %d", &d, &h, &v, &e); 
	nh = (4 * v) / (pi*d*d);

    if(nh<=e)
    {
        printf("NO\n");
    }
    else
    {
        k=nh-e;
        r=(double)(h)/(k);
        printf("YES\n");
        printf("%lf\n",r);
    }

    return 0;
}
