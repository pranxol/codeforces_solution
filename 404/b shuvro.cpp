#include<bits/stdc++.h>
#define PI acos(-1)
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define mem(a,b) memset(a,b,sizeof(a))
#define MX 100005
#define MXX 1e18
#define  s second
#define f first
#define mod 1000000007
#define inf 2e9
//int ex[]={1,-1,0,0};
//int wye[]={0,0,1,-1};
using namespace std;
int n,m,l1=0,l2=0,r1=inf,r2=inf,an=0,x,y;
int main()
{
    fast();
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x>>y;
        r1=min(y,r1);
        l1=max(l1,x);
    }
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        r2=min(r2,y);
        l2=max(l2,x);
    }
    an=max(l2-r1,an);
    an=max(l1-r2,an);
    cout<<an<<endl;
    return 0;
}
