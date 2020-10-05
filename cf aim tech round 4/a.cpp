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
#define maxi 1005
bool vis[1008];
int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    if(k>s.size())
        pf("impossible");
    else
    {
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(vis[s[i]]==0)
            {
                vis[s[i]]=1;
                cnt++;
            }
        }
        pf("%d",max(0,k-cnt));
    }

    return 0;
}
