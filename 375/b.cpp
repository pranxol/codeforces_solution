#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)

int main()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    int i=0;
    int prevlen=0,longlen=0;
    int pth=0,prevpth=0,inspth=0;
    int insprevlen=0;
    int lastindex=n-1;
    while(n--)
    {
        if(i==lastindex)
        {
            if(a[i]!='_'&&a[i]!='('&&a[i]!=')'&&pth==0)
            {
                prevlen++;
                if(prevlen>longlen)
                {
                    longlen=prevlen;
                }
            }
        }
        if(a[i]=='_'||a[i]=='('||a[i]==')')
        {
            if(prevlen>longlen)
            {
                longlen=prevlen;
            }

            if(pth==1)
            {
                if(insprevlen!=0)
                {
                    prevpth++;
                    insprevlen=0;
                }
            }
            prevlen=0;
        }

        if(a[i]=='_')
        {
            //continue;
        }
        else if(a[i]=='(')
        {
            pth=1;
            //continue;
        }
        else if(a[i]==')')
        {
            pth=0;

            inspth=inspth+prevpth;

            prevpth=0;
        }
        else if(pth==0)
        {
            prevlen++;
        }
        else if(pth==1)
        {
            insprevlen=1;
        }

        i++;
    }

    pf("%d %d",longlen,inspth);
    return 0;
}
