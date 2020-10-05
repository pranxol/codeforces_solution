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
#define mx 1005


int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);
    int n;
    scanf("%d",&n);
    int last=n%10;

    if(last<=4)
    {
        printf("%d",n-last);
    }
    else
    {
        int add=10-last;
        printf("%d",n+add);
    }

    return 0;
}
