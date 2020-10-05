#include<bits/stdc++.h>
#define PI acos(-1)
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define mem(a,b) memset(a,b,sizeof(a))
#define MX 105
#define MXX 1000005
#define  s second
#define f first
#define mod 1000000007
#define inf 200000000
#define err 1e-10
//int ex[]={1,-1,0,0};
//int wye[]={0,0,1,-1};
using namespace std;
int n,m,cnt=inf;
char s[MX][MX];
int process(int beg,int num)
{
    for(int i=0,j,k;i<m;i++){
        for( j=beg,k=i;j<beg+m;j++,k++){
            if(s[1][j]!=s[num][k]) break;
        }
        if(j==beg+m) return i;
    }
    return -1;
}
int main()
{
    fast();
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%s",s[i]);
    }
    m=strlen(s[1]);
    for(int i=1,j=0;i<=n;i++){
        for(j=0;j<m;j++) s[i][j+m]=s[i][j];
        s[i][j+m]='\0';
    }
    for(int i=0;i<m;i++){
        int lol=0,tmp;
        for(int j=2;j<=n;j++){
            tmp=process(i,j);
            if(tmp==-1){
                printf("-1");
                return 0;
            }
            lol+=tmp;
        }
        cnt=min(lol+i,cnt);
    }
    printf("%d\n",cnt);
    return 0;
}
