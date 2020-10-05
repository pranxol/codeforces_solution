#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)


int main()
{
    int n;
    string a,b="";
    cin>>n>>a;
    int len=n;
    int cnt=0,group=0;

    for(int i=0;i<len;i++)
    {
        while(a[i]=='B')
        {
            cnt++;
            i++;
        }
        if(cnt>0)
        {
            stringstream ss;
            ss << cnt;
            string strng = ss.str();
            b=b+strng+' ';
            group++;
            i--;
        }

        cnt=0;
    }

    if(group==0)
    {
        pf("0");
        return 0;
    }
    else
    {
        pf("%d\n",group);
        cout<<b;
    }

    return 0;
}
