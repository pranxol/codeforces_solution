

#include<bits/stdc++.h>
#include<sys/time.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define infinity 2147483647

int main()
{
    char s[105],ss[105];
    gets(s);

    int len=strlen(s);
    //pf("size %d\n",len);
    int r,b,y,g;
    map<char,int>m,res;
    map<int,char>p;

    m['R']=-1;
    m['B']=-1;
    m['Y']=-1;
    m['G']=-1;

    for(int i=0;i<len;i++)
    {
        if(s[i]!='!' and m[s[i]]==-1)
        {
            int rem=i%4;
            p[rem]=s[i];
            m[s[i]]==0;
        }
    }
    res['B']=0;
    res['Y']=0;
    res['R']=0;
    res['G']=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]=='!')
        {
            int rem=i%4;
            res[p[rem]]=res[p[rem]]+1;
        }
    }
    //cout<<p[1]<<endl<<p[2]<<endl<<p[3]<<endl<<p[0]<<endl;
    //pf("%s %s %s %s\n",p[1],p[2],p[3],p[0]);
    pf("%d %d %d %d\n",res['R'],res['B'],res['Y'],res['G']);
    return 0;
}
