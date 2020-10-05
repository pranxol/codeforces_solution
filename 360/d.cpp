#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
///#include<bits/stdc++.h>
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

int main()
{
     int n, k, l = 1;
     scanf("%d%d", &n, &k);

     for(int i = 0; i < n; ++i)
    {
        int num; scanf("%d", &num);
        num = gcd(num, k);
        l = lcm(num, l);
       // printf("%d  %d\n",num,l);
     }

     if(l == k) puts("Yes");
     else puts("No");

     return 0;
}


