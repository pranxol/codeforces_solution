///*BISMILLAHIR RAHMANIR RAHIM*///
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,x=0,y=0,u=0,d=0,l=0,r=0,cou;
    char c;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        cin>>c;
        if(c=='U')u++;
        else if(c=='D')d++;
        else if(c=='L')l++;
        else r++;
    }
    cou=2*min(u,d)+2*min(l,r);
    printf("%d\n",cou);
    return 0;
}
