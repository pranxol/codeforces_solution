#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int len=s.size();
    int chk=1;
    for(int i=0;i<len;i++)
    {
        if(s[i]=='n'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            continue;
        }
        else
        {
            if(i==len-1)
            {
                printf("NO");return 0;
            }
            int j=i+1;
            if(s[j]!='a'&&s[j]!='e'&&s[j]!='i'&&s[j]!='o'&&s[j]!='u')
            {
                printf("NO");return 0;
            }
        }

    }

    printf("YES");
    return 0;
}
