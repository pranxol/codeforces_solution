#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)

int main()
{
    int n,k;
    cin>>n>>k;
    string pass;
    string a[n+2];
    int length[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        int len=a[i].size();
        length[i]=len;
    }
    cin>>pass;
    int passlen=pass.size();
    int mintimlen=passlen;
    sort(length,length+n);
    int mintime=0,timelag=0;
    int maxtime=0;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(length[i]<passlen)
        {
            timelag=timelag+1;
            cnt++;

        }
        if(cnt==k)
        {
            timelag=timelag+5;
            cnt=0;
        }

        if(length[i]==passlen)
        {
            if(length[i]==mintimlen)
            {
                mintime=timelag+1;
                mintimlen--;
                if(i==n-1)
                {
                    maxtime=mintime;
                    break;
                }
            }
            timelag=timelag+1;
            cnt++;
        }
        if(i==n-1||length[i+1]>passlen)
        {
            maxtime=timelag;
            break;
        }
    }

    pf("%d %d",mintime,maxtime);


    return 0;
}
