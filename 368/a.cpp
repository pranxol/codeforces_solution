#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    getchar();
    int cnt=0,chk=0;
    char ch;
    for(int i=0;i<n;i++)
    {
        while(1)
        {
            scanf("%c",&ch);
            if(ch==' ')
                continue;
            else if(ch=='C'||ch=='M'||ch=='Y')
            {
                chk=1;
            }

            if(ch=='\n')
                break;
        }
    }
    if(chk==1)
        pf("#Color");
    else
        pf("#Black&White");
    return 0;
}
