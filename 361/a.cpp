#include <bits/stdc++.h>
#define ll long long
#define mod 1000000000+7

using namespace std;




int main()
{

   ll n, i, U = 0, D = 0, R = 0, L = 0;
    string s;
    cin>>n;
    cin>>s;
    for(i = 0; i < n; i++)
    {
        if(s[i] == '1')
        {
            L = 1;
            U = 1;
        }
        else if(s[i] == '2')
        {
            U = 1;
        }
        else if(s[i] == '3')
        {
            U = 1;
            R = 1;
        }
        else if(s[i] == '4')
        {
            L = 1;
        }
        else if(s[i] == '6')
        {
            R = 1;
        }
        else if(s[i] == '7')
        {
            D = 1;
            L = 1;
        }
        else if(s[i] == '9')
        {
            D = 1;
            R = 1;
        }
        else if(s[i] == '0')
        {
            D = 1;
            L = 1;
            R = 1;
        }
    }
    if(R == 1 && L == 1 && D == 1 && U == 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
