#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

int t;cin>>t;
while(t--){

int n,k;
cin>>n>>k;
int arr[n+2][n+2];
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cin>>arr[i][j];
    }
}
int ans=0;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(arr[i][j]!=arr[n-i+1][n-j+1]){
            ans++;
        }
    }
}
ans=ans/2;

if(ans>k){
   
    cout<<"NO"<<endl;
}else if(ans<=k){
   k=k-ans;
   if(k%2==0||n%2!=0){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
}
}


}