#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)


int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);
    string s;
    cin>>s;
    int len=s.size();
    int point=0,q=0;
    for(int i=len-1;i>=0;i--)
    {
        if(s[i]=='Q')
        {
            point =i;
            q=1;
            break;
        }
    }
    long long  sum=0;
    int a=0,prev=0;
    for(int i=point-1;i>=0;i--)
    {
        if(s[i]=='A')
        {
            a++;
        }
        if(s[i]=='Q')
        {
            prev=prev+a*q;
            sum=sum+prev;
            a=0;
            q++;
        }
    }
    pf("%I64d",sum);
    return 0;
}
