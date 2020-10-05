#include<iostream>
using namespace std;
int main(){

int a[10000],i,n,count=0,count1=0;
cin>>n;
for(i=0;i<n*2;i++){
    cin>>a[i];

}
for(i=0;i<n*2;i+=2){

if(a[i]==a[i+1] && a[i]>=a[i+2]){

    count++;
    //cout<<a[i]<<" "<<a[i+2]<<endl;

}
}
 //cout<<count;

    if(count==n){
        cout<<"maybe"<<count;


    }
else {

for(i=0;i<n*2;i+=2){

if(a[i]!=a[i+1]){

    count1++;

}
}
if(count1>=1){
cout<<"rated";

}
else{
    cout<<"unrated";

}
}

cout<<endl<<a[n*2+1]<<endl<<a[n*2+2];
int b[2];
b[0]=1;
cout<<endl<<b[0]<<endl<<b[3];
return 0;
}

