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
int main()
{
    int a,b;
    sf("%d%d",&a,&b);
    for(int i=1;;i=i+2)
    {
        a=a-i;
        b=b-i-1;
        if(a<0)
        {
            pf("Vladik");
            break;
        }

        else if(b<0)
        {
            pf("Valera");
            break;
        }


    }

    return 0;
}
