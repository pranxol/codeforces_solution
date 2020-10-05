#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define pb push_back
#define pob pop_back
#define infinity 2147483647
#define pii pair<int,int>
//freopen ("input.txt", "r", stdin);
//freopen ("output.txt", "w", stdout);
int main()
{
    int n;
    sf("%d",&n);
    int a[n+2],b[n+2],c[n+2],block[n+2];
    memset(block,0,sizeof(b));
    memset(c,0,sizeof(c));
    for(int i=1;i<=n;i++)
    {
        sf("%d",&a[i]);
        block[a[i]]=1;
    }
    int v;
    for(int i=1;i<=n;i++)
    {
        if(block[i]==0)
            v=i;
    }
    int book[n+2];
    memset(book,0,sizeof(book));
    for(int i=1;i<=n;i++)
    {
        sf("%d",&b[i]);
        if(a[i]==b[i])
        {
            c[i]=a[i];
            book[a[i]]=1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(c[i]==0)
        {
            if(book[a[i]]==1&&book[b[i]]==0)
            {
                c[i]=b[i];
                book[b[i]]=1;
            }
            else if(book[b[i]]==1&&book[a[i]]==0)
            {
                c[i]=a[i];
                book[a[i]]=1;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(c[i]==0)
        {
            if(book[a[i]]==0)
            {
                c[i]=a[i];
                book[a[i]]=1;
            }

            else if(book[b[i]]==0)
            {
                c[i]=b[i];
                book[b[i]]=1;
            }

            else
            {
                c[i]=v;
            }

        }
        pf("%d ",c[i]);
    }
    return 0;
}
