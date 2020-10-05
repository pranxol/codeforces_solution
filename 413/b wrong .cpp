
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define pb push_back
#define pob pop_back
#define infinity 2147483647
//freopen ("input.txt", "r", stdin);
//freopen ("output.txt", "w", stdout);
map<int ,int >mprice,m1price,m2price,m3price;
int main()
{

    int n;
    vector<int >v1,v2,v3,v,v4;
    sf("%d",&n);
    int fc[n+5],bc[n+5];
    for(int i=1;i<=n;i++)
    {
        int price;
        sf("%d",&price);
        mprice[price]=1;
        m1price[price]=1;
        m2price[i]=1;
        m3price[i]=price;

    }
    for(int i=1;i<=n;i++)
    {
        sf("%d",&fc[i]);
        if(fc[i]==1)
        {
            v1.pb(m3price[i]);
        }
        if(fc[i]==2)
        {
            v2.pb(m3price[i]);
        }
        if(fc[i]==3)
        {
            v3.pb(m3price[i]);
        }
    }
    for(int i=1;i<=n;i++)
    {
        sf("%d",&bc[i]);
        if(bc[i]==1&&fc[i]!=1)
        {
            v1.pb(m3price[i]);
        }
        if(bc[i]==2&&fc[i]!=2)
        {
            v2.pb(m3price[i]);
        }
        if(bc[i]==3&&fc[i]!=3)
        {
            v3.pb(m3price[i]);
        }


    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    sort(v3.begin(),v3.end());

    int m,c;
    sf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        sf("%d",&c);
        int chk=0;
        if(c==1)
        {
            int j=0;
            while(1)
            {
                if(mprice[v1[j]]==1)
                {
                    v4.pb(v1[j]);
                    mprice[v1[j]]=0;
                    v1.pop_back();
                    chk=1;
                    break;
                }
                j++;
                v1.pop_back();
            }

        }
        else if(c==3)
        {
            int j=0;
            while(1)
            {
                if(mprice[v2[j]]==1)
                {
                    v4.pb(v2[j]);
                    mprice[v2[j]]=0;
                    v2.pop_back();
                    chk=1;
                    break;
                }
                j++;
                v2.pop_back();
            }

        }
        else
        {
            int j=0;
            while(1)
            {
                if(mprice[v3[j]]==1)
                {
                    v4.pb(v3[j]);
                    mprice[v3[j]]=0;
                    v3.pop_back();
                    chk=1;
                    break;
                }
                j++;
                v3.pop_back();
            }

        }
        if(chk==0)
            v4.pb(-1);

    }

    for(int i=0;i<v4.size();i++)
    {
        pf("%d ",v4[i]);
    }

    return 0;
}
