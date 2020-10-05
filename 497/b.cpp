#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int x=INT_MAX,y;
    for(int i=1;i<=n;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(a>x&& b>x)
        {
            printf("NO");return 0;
        }
        else
        {
            if(a<=x &&b<=x)
            {
                x=max(a,b);
            }
            else if(a>x)
                x=b;
            else
                x=a;
        }
    }
    printf("YES");
    return 0;
}
