#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf prllf
#define pi acos(-1)
#define ll long long
#define pb push_back
#define infinity 2147483647
#define pii pair<ll,ll>
#define ff first
#define ss second
#define MAX 1005

#include <string>
int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);
    ll k,p,result=0;
    scanf("%lld%lld",&k,&p);
    string s,ss;
    for(ll i=1;i<=k;i++)
    {
        stringstream st;
        st<<i;
        s=st.str();
        ss=s;
        reverse(s.begin(),s.end());
        ss=ss+s;
        //cout<<"ss="<<ss<<endl;
        ll len =ss.size();
        ll j;
        ll r=0;
        for( j=0;j<len;j++)
        {
            r=(r*10+(ss[j]-'0'))%p;
        }
        //cout<<"r="<<r<<endl;
            //c[j]=ss[j];
        //c[j]='\0';
        //cout<<ss<<"  "<<c<<endl;
        result=(result+r)%p;

    }
    cout<<result;
    return 0;
}
