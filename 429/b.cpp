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
#define Max 1000008

int main()
{
    int n,a,cnt=0;
    sf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sf("%d",&a);
        if(a%2==1)
            cnt=1;
    }
    if(cnt==1)
        pf("First");
    else
        pf("Second");




    return 0;
}

