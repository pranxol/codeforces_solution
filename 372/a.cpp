#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)

int main()
{
    int n,c,t1,t2;
    scanf("%d %d",&n,&c);
    scanf("%d",&t1);
    int cnt=1;
    for(int i=2;i<=n;i++)
    {
        scanf("%d",&t2);
        if(t2-t1<=c)
            cnt++;
        else
            cnt=1;
        t1=t2;
    }
    printf("%d",cnt);

    return 0;
}
