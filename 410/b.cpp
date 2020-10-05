#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define infinity 2147483647




int main()
{
    int n;
    sf("%d\n",&n);
    string s;
    char c;
    queue< char > a[n+2];
    for(int i=1;i<=n;i++)
    {
        sf("%c",&c);
        while(c!='\n')
        {
            a[i].push(c);
            sf("%c",&c);
        }
    }
    for(int i=1;i<n;i++)
    {
        cnt=0;
        for(int j=1;j<n;j++)
        {
            if(a[j]==a[j+1])
            {
                if(j+1==n)
                {
                    pf("%d",cnt);
                    return 0;
                }
            }
            else
            {
                c=a[j].front;
                a[j].
            }
        }


        else
            break;
    }

    for(int i=1;i<=)

    return 0;
}
