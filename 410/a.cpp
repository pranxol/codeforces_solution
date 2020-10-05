#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define infinity 2147483647




int main()
{
    string m,a,b,c,d,e;
    int i,j;
    cin>>a;
    b=a;
    c=a;
    m=a;
    int len=a.size();
    j=len-1;
    reverse(m.begin(),m.end());
    if(a==m&&len%2==1)
    {
        printf("YES");
        return 0;
    }


    for(i=0;i<=len/2;i++)
    {
        if(a[i]!=a[j])
        {
            b[i]=a[j];
            c[j]=a[i];
            d=b;e=c;
            reverse(d.begin(),d.end());
            reverse(e.begin(),e.end());
            if(b==d||c==e)
            {
                printf("YES");
                return 0;
            }

            b[i]=a[i];
            c[j]=a[j];
        }
        j--;
    }
    pf("NO");
    return 0;
}
