#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define pb push_back
#define infinity 2147483647
#define pii pair<int,int>
#define mp make_pair
#define mx INT_MAX
int ara[150];
map<int,int>maa;
int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);

    int n,m;
    scanf("%d%d",&n,&m);
    int a[m+5];


    int cnt=1;
    for(int i=1;i<=m;i++)
    {
        int num;
        scanf("%d",&num);
        a[i]=num;
        if(maa[num]==0)
        {
            maa[num]=cnt;
            ara[cnt]=ara[cnt]+1;
            cnt=cnt+1;
        }
        else
        {
            int vv=maa[num];
            ara[vv]=ara[vv]+1;
        }
    }

    sort(ara+1,ara+cnt,greater<int>());
    int din=0;
    int hp=0;
    while(1)
    {
        hp++;
        int tot=0;
        for(int i=1;i<cnt;i++)
        {
           int  div=ara[i]/hp;
           tot=tot+div;
           if(n<=tot)
                din=hp;
        }
        if(tot<n)
            break;
    }
    pf("%d",din);

    return 0;
}
