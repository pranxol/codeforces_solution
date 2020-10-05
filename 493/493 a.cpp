#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define pb push_backs
#define infinity 2147483647
#define pii pair<int,int>
#define mp make_pair
#define mx INT_MAX
string s[100005];
int cum[10+5];
int a[10+5];
int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    if (n==2)
    {
        if (a[1]==a[2])
        {
            printf("-1");
            return 0;
        }
    }
    if(n==1)
    {
        printf("-1");
        return 0;
    }
    int mi=INT_MAX;
    int res=1;
    for(int i=1;i<=n;i++)
    {
        if(a[i]<=mi)
        {
            mi=a[i];
            res=i;
        }
    }
    printf("1\n%d",res);
    return 0;
}
