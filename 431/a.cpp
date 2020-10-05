#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define pb push_back
#define pob pop_back
#define infinity 2147483647
#define pii pair<int,int>
#define ff first
#define ss second
#define Max 1005
int main()
{
    int n, i, a[200];

	scanf("%d", &n);
	for(i = 0; i < n; i ++)
        scanf("%d", &a[i]);
	if((n % 2) && (a[0] % 2) && (a[n - 1] % 2))
        printf("Yes\n");
	else
        printf("No\n");
    return 0;
}
