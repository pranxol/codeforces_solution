#include<bits/stdc++.h>
#define MX 150005
using namespace std;
typedef long long ll;

vector<int> vt[MX];
bool chk[MX];

bool func(int n){
     vector<int> tmp;
     int i, j, k;
     int cnt=0;
     queue< int > qu;
     qu.push(n);
     chk[n]=1;
     tmp.push_back(n);
     while(!qu.empty()){
          k=qu.front(); qu.pop();
          cnt++;
          for(i=0; i<vt[k].size(); ++i){
               j=vt[k][i];
               if(!chk[j]){
                    chk[j]=1;
                    tmp.push_back(j);
                    qu.push(j);
               }
          }
     }
     for(i=tmp.size()-1; i>=0; --i){
          //cout << tmp[i] << " " << vt[tmp[i]].size() << " " << cnt << endl;
          if(vt[tmp[i]].size()!=cnt-1) return false;
     }
     return true;
}

int main(){
     int i, j, k;
     int n, m, u, v;
     cin >> n >> m;
     for(i=0; i<m; ++i){
          scanf("%d %d", &u, &v);
          u--; v--;
          vt[u].push_back(v);
          vt[v].push_back(u);
     }
     for(i=0; i<n; ++i){
          if(!chk[i]){
               if(!func(i)){
                    printf("NO\n");
                    return 0;
               }
          }
     }
     printf("YES\n");

}
