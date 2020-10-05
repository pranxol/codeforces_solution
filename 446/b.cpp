/*input
10
1 1 3 0 0 0 2 1 0 3
*/

#include <bits/stdc++.h>
using namespace std;

#define mx 1000005
#define ll long long
#define MOD 1000000007
#define fs first
#define sc second
#define pii pair<int, int>

int ara[mx];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 1; i<=n; i++)
	{
		int l;
		scanf("%d", &l);
		if(l){
			int left = max(0, i-l);
			ara[left]++;
			ara[i]--;
		}
	}
	int ans = 0;
	for(int i = 1; i <= n; i++){
		ara[i] += ara[i-1];
		if(ara[i] == 0) ans++;
	}
	printf("%d\n", ans);
	return 0;
}
