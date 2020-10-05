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
#define MAX 1005


int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);

    int a[10];
    for(int i=1;i<=6;i++)
        sf("%d",&a[i]);
    for(int i=1;i<=4;i++)
    {
        for(int j=i+1;j<=5;j++)
        {
            for(int k=j+1;k<=6;k++)
            {
                int sum1=a[i]+a[j]+a[k];
                int sum2=0;
                for(int l=1;l<=6;l++)
                {
                    if(l!=i&&l!=j&&l!=k)
                        sum2=sum2+a[l];
                }
                if(sum1==sum2)
                {
                    pf("YES");
                    return 0;
                }
            }
        }
    }
    pf("NO");

    return 0;
}
