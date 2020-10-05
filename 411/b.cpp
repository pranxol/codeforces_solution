#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define pb push_back
#define pob pop_back
#define infinity 2147483647
//freopen ("input.txt", "r", stdin);
//freopen ("output.txt", "w", stdout);
int main()
{
    int n;
    sf("%d",&n);
    int loop=n/4;
    int rem=n%4;
    for(int i=1;i<=loop;i++)
    {
        pf("aabb");
    }
    if(rem==1)
        pf("a");
    else if(rem==2)
        pf("aa");
    else if(rem==3)
        pf("aab");

    return 0;
}
