#include<bits/stdc++.h>
#define MX 1005
using namespace std;
typedef long long ll;

int a1[MX], a2[MX];

int main(){
     int i, j, k;
     int n, flag=0;
     cin >> n;
     for(i=0; i<n; ++i){
          scanf("%d %d", &a1[i], &a2[i]);

     }
     for(i=0; i<n; ++i){
          if(a1[i]!=a2[i]){
               cout << "rated" << endl;
               return 0;
          }
          if(i && a2[i]>a2[i-1]) flag=2;
     }
     if(flag==2) cout << "unrated" << endl;
     else cout << "maybe" << endl;
}
