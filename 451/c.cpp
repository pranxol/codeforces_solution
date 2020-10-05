#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define pb push_back
#define infinity 2147483647
#define pii pair<int,int>
#define ff first
#define ss second
#define mx 1005
int cmp(int a,int b)
{
    return a>b;
}
map<string,int >m;

vector<pair<string,int> >v[25];
int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);
    int n;
    scanf("%d",&n);

    int mcnt=0;

    for(int i=1;i<=n;i++)
    {
        fflush(stdin);
        char c;
        string s="";
        while(scanf("%c",&c)==1&& c!=' ')
        {
            s=s+c;

        }

        if(m[s]==0)m[s]=++mcnt;
        //cout<<s<<endl;
        //cout<<m[s]<<"  "<<mcnt<<endl;
        int nop;
        scanf("%d",&nop);
        int num;
        while(nop--)
        {
            scanf("%d",&num);
            v[m[s]].push_back(num);
            //cout<<"  "<<num;
        }
        //cout<<endl;

    }
    int len=mcnt;
    int x;
    /*for(x=1;x<=len;x++)
    {
        int vlen=v[x].size();
        //cout<<"vlen= "<<vlen<<endl;
        for(int j=0;j<vlen;j++)
        {
            printf("%d ",v[x][j]);
        }
        puts("\n");
    }*/

    for(x=1;x<=len;x++)
    {
        int vlen=v[x].size();
        sort(v[x].begin(),v[x].end(),cmp);
        for(int j=0;j<vlen;j++)
        {
            printf("%d ",v[x][j]);
        }
        puts("\n");
    }

    return 0;
}
