#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define pb push_back
#define infinity 2147483647
#define pii pair<int,int>
#define mp make_pair
#define mx INT_MAX

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);

    int n,k;
    scanf("%d%d",&n,&k);
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int len=s.size();

    for(int i=0;i<len;i++)
    {
        string a="";
        a=a+s[i];int cnt=1;
        int y=i;
        for(int j=y;j<len;j++)
        {
            if(s[j]>s[y]+1)
            {
                a=a+s[j];
                ++cnt;
                y=j;
            }
            if(cnt==k)
            {
               //cout<<a<<endl;
                int tot=0;
                for(int x=0;x<k;x++)
                {
                    tot=tot+a[x]-96;
                }
                pf("%d",tot);
                return 0;
            }
        }
    }
    pf("-1");


    return 0;
}
