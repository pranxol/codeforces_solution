#include<bits/stdc++.h>
#define MX 100005
using namespace std;
typedef long long ll;

int main(){
     int i, j, k;
      string str, tmp;
      cin >> str;
      int l=str.length();
      int cnt=0, mx=0;
      for(i=0; i<l-1; ++i) if(str[i]=='V' && str[i+1]=='K'){cnt++; i++;}
      mx=cnt;
      for(i=0; i<l; ++i){
          if(str[i]=='V'){
               tmp=str;
               tmp[i]='K';
               cnt=0;
               for(j=0; j<l-1; ++j) if(tmp[j]=='V' && tmp[j+1]=='K'){cnt++; j++;}
               mx=max(mx, cnt);
          }
          if(str[i]=='K'){
               tmp=str;
               tmp[i]='V';
               cnt=0;
               for(j=0; j<l-1; ++j) if(tmp[j]=='V' && tmp[j+1]=='K'){cnt++; j++;}
               mx=max(mx, cnt);
          }
      }
      cout << mx << endl;
}
