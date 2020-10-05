#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int a[n+8];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    int cur=n-1-1;
    int cnt=0;
    for(int i=n-1;i>=0;i--)
    {
        int j=i;
        while(cur>=0)
        {

            if(a[cur]<a[i])
            {
                cnt++; cur--;
                break;
            }
             cur--;
        }
    }
    printf("%d",cnt);
    return 0;
}
