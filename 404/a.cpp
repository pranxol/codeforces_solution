#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define infinity 2147483647



int main()
{
    map <string ,int >m;
    m["Tetrahedron"]=4;
    m["Cube"]=6;
    m["Octahedron"]=8;
    m["Dodecahedron"]=12;
    m["Icosahedron"]=20;
    int n,tot=0;
    string s;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        tot=tot+m[s];
    }
    pf("%d\n",tot);
    return 0;
}
