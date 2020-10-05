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
    int a,b,n;
    sf("%d%d",&a,&b);

    char c;
    n=a;
    string s;
    cin>>s;
    map<char,int >m;
    int i=0,maxi=0;

    while(n--)
    {
        c=s[i++];
        m[c]=m[c]+1;
        if(m[c]>maxi)
            maxi=m[c];
    }
    if(maxi<=b)
        pf("YES");
    else
        pf("NO");

    return 0;
}
