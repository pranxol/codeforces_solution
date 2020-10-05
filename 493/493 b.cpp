#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define pb push_back
#define infinity 2147483647
#define pii pair<int,int>
#define mp make_pair
#define mx INT_MAX

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);

    int n,b;
    scanf("%d%d",&n,&b);
    int a[n+5];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int cnt=0;
    int dnt=0;
    vector<int>v;
    for(int i=1;i<n;i++)
    {
        if(a[i]%2==1)
        {
            cnt++;
        }
        else
        {
            dnt++;
        }
        if(cnt==dnt)
        {
            cnt=dnt=0;
            v.pb(abs(a[i]-a[i+1]));
        }
    }
    sort(v.begin(),v.end());
    int ans=0,tot=0;
    for(int i=0;i<v.size();i++)
    {
        if(tot+v[i]<=b)
        {
            ans++;
            tot+=v[i];
        }
    }
    pf("%d",ans);

    return 0;
}
