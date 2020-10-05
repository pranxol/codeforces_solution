
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)

int main()
{
    int n;
    sf("%d",&n);
    string a;
    cin>>a;
    int ra=0,ba=0,bl=0,rl=0;
    //cout<<n<<"\n"<<a[2]<<endl;
    for(int i=0;i<n;i++)
    {
        if(a[i+1]==a[i])
        {
            if(a[i+1]=='r')
            {
                ra=ra+1;
                bl=bl+1;
                a[i+1]='b';
            }
            else if(a[i+1]=='b')
            {
                ba=ba+1;
                rl=rl+1;
                a[i+1]='r';
            }
        }
    }
    int ckh=0;
    if(rl>ra)
        ckh=ckh+rl-ra;
    if(bl>ba)
        ckh=ckh+bl-ba;
    int swp;
    if(ba<ra)
        swp=ba;
    else
        swp=ra;

    int tot=swp+ckh;
    pf("%d",tot);

    return 0;
}
