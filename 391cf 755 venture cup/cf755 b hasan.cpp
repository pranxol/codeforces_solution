#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;
typedef long long ll;
#define INF 10000000
#define N 1005
#define M 2000
#define PI acos(-1)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define reps(i,a,b) for(int i = a; i >= b; i--)
#define sc scanf
#define pc printf
#define pb push_back
#define F first
#define S second

int n,m,cnt;
string s,p;
map<string,int>po;

int main()
{
    sc("%d%d",&n,&m);

    rep(i,0,n){
        cin >> s;
        po[s] = 1;
    }

    rep(i,0,m){
        cin >> p;
        if(po[p] == 1){
            cnt++;
        }
    }

    if(n > m){
        puts("YES");
    }
    else if(n < m){
        puts("NO");
    }
    else{
        if(cnt % 2 == 0){
            puts("NO");
        }
        else{
            puts("YES");
        }
    }

    return 0;
}
