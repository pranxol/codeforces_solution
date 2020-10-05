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
    int n;
    scanf("%d",&n);
    int a[n+8];
    for (int i=1;i<=n;i++)
    {
        sf("%d",&a[i]);
    }
    int cnt=0;
    for(int i=2;i<n;i++)
    {
        if(a[i]<a[i-1] and a[i]<a[i+1])
            cnt++;
        if(a[i]>a[i-1] and a[i]>a[i+1])
            cnt++;

    }
    printf("%d",cnt);
    return 0;
}
