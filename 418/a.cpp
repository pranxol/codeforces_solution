#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define eb emplace_back

typedef long long ll;

const ll mod = 1000000007;

ll powmod(ll a, ll b) {ll res = 1; ll rem = a % mod; for (; b; b >>= 2) {if (b & 1) res = (res * rem) % mod; rem = (rem * rem) % mod;} return res;}

const int N = 108;

int num[N];
int rep[N];

int main()
{
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);

    int n = 0;
    int k = 0;
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; ++i) {
	scanf("%d", num + i);
    }

    for (int i = 0; i < k; ++i) {
	scanf("%d", rep + i);
    }

    sort(rep, rep + k);

    int a = k - 1;

    for (int i = 0; i < n; ++i) {
	if (num[i] == 0) {
	    num[i] = rep[a];
	    --a;
	}
    }

    for (int i = 0; i < n - 1; ++i) {
	if (num[i] >= num[i + 1]) {
	    puts("Yes");
	    return 0;
	}
    }

    puts("No");
    return 0;
}
