#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
int a[400][400];
for(int i=0;i<400;i++){
    for(int j=0;j<400;j++){
        a[i][j]=0;
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
}
int ans=0;
for(int i=0;i<m;i++){
int sum=0,ki=0;
for(int j=0;j+i<400;j++){
sum+=a[j][j+i];
}

for(int k=i+2;k<400;k=k+2){
int op;
op=(k+i)/2;

int rum=0;
for(int p=0;p<=k;p++){
  if(k-p!=op){
    rum+=a[p][k-p];
    }
}

if(ki<rum){
    
    ki=rum;
}

}
 sum+=ki;
if(ans<sum){
    
    ans=sum;
}

}




cout<<ans<<endl;

}
}