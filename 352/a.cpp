/// name : Misu Dey
/// university : cuet
/// code is art :v
/// but my code is havizavi -_-
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>
#include<map>
#include<math.h>
#include<string.h>
#define read(n) scanf("%I64d",&n)
#define ll long long
#define pi acos(-1)
using namespace std;


int main ()
{
    ll n;
    cin>>n;
   if(n<10)
   {
       cout<<n<<endl; return 0;
   }
   ll bef,aft;
   ll ck=9;
   for(ll i=10;i<=1000;i++)
   {
       if(i<100)
       {
           ck+=2;
       }
       else if(i>=100 && i<1000)
       {
           ck+=3;
       }
       else
        ck+=4;
    //cout<<ck<<' '<<i<<endl;
    if(ck==n)
    {
       if(i<100) cout<<i%10<<endl;
       else if(i>=100 && i<1000) cout<<i%10<<endl;
       return 0;
    }
    else if(ck>n)
    {
        if(i<100) cout<<i/10<<endl;
        else if(i>=100 && i<1000)
        {
            ck-=3;
            if(n-ck==1)
            {
                cout<<(i/10)/10<<endl;
            }
            else if(n-ck==2)
            {
                cout<<(i/10)%10<<endl;
            }
        }
        return 0;
    }
   }
    return 0;
}
