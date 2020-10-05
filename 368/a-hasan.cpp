
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pa;
const ll fx = 1e18;
#define INF 1e18
#define f first
#define s second
#define mp make_pair
#define pb push_back
#define rep(i,p,n) for(int i = p; i < n; i++)
#define reps(i,n,m) for(int i = n; i >= m; i--)
#define pf(x) printf("%d\n",x)
#define pfl(x) printf("%I64d ",x)
#define pfs(x) printf("%d ",x)
#define sf(x) scanf("%d",&x)
#define sfl(x) scanf("%I64d",&x)
#define pfd(x,y) printf("%d %d\n",x,y)
#define sfd(x,y) scanf("%d%d",&x,&y)

int n,m;
char ch;
bool f;

int main()
{
    sfd(n,m);

    rep(i,0,n)
    {
        rep(j,0,m)
        {
            cin >> ch;
            if(ch == 'C' || ch == 'M' || ch == 'Y')
                f =true;
        }
    }

    if(f){
        printf("#Color");
    }
    else printf("#Black&White");

    return 0;
}

