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
int main()
{
    int n,start,endd;
    char a[20],c,d;
    a[1]='v';
    a[2]='<';
    a[3]='^';
    a[4]='>';
    a[0]='>';
    sf("%c %c",&c,&d);
    sf("%d",&n);

    for(int i=1;i<5;i++)
    {
        if(a[i]==c)
           start=i;
        if(a[i]==d)
            endd=i;
    }
    int sum=start+n;
    int sub=start-n;
    int res1=sum%4;
    int res2=(sub+4)%4;
    if(a[res1]==d&&a[res2]==d)
        pf("undefined");
    else if(a[res1]!=d&&a[res2]!=d)
        pf("undefined");
    else if(a[res1]==d)
        pf("cw");
    else
        pf("ccw");

    return 0;
}
