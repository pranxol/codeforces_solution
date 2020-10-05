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
#define MAX 2*100000+8


int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);

    int a[MAX],b[MAX];
    memset(a,-1,sizeof a);
    int n;
    sf("%d",&n);
    int max=-1;
    for(int i=1;i<=n;i++)
    {
        int x;
        sf("%d",&x);
        a[x]=i;
        if(x>max)
            max=x;

    }
    int min=1e6;
    int res;
    for(int i=0;i<=max;i++)
    {
        if(a[i]!=-1)
        {
            if(a[i]<min)
            {
                min=a[i];
                res=i;
            }
        }
    }
    printf("%d",res);


    return 0;
}
