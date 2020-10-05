#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        map<int , int>m;
        int cnt=0;
        int num;
        for(int c=1;c<=n;c++)
        {
            scanf("%d",&num);
            if(m[num]==0)
            {
                cnt++;
                m[num]=1;
            }
        }
        m.clear();
        printf("%d\n",cnt);
    }
}
