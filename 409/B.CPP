#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define infinity 2147483647



int main()
{
   string a,b,r="";
   cin>>a>>b;
   int siz=a.size();

   for(int i=0;i<siz;i++)
   {
       if(a[i]<b[i])
       {

           pf("-1");
           return 0;
       }
       else if(a[i]==b[i]&&a[i]=='z'&&b[i]=='z')
        {
            r=r+b[i];
           //pf("-1");
           //return 0;

        }
        else
        {
            if(a[i]==b[i])
            {
                char ch=b[i]+1;
                r=r+ch;
            }
            else
                r=r+b[i];
        }
   }
   cout<<r;

    return 0;
}
