#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
int n;cin>>n;
vector<int>v(n);
for(int &x:v){
    cin>>x;
}
int ans=INT64_MAX;

for(int i=0;i<n;i++){
int a1=0,k1=0;
for(int j=i+1;j<n;j++){
    k1+=a1/v[j]+1;
    a1=(a1/v[j]+1)*v[j];
    
}
int a2=0,k2=0;
for(int j=i-1;j>=0;j--){
    k2+=a2/v[j]+1;
    a2=(a2/v[j]+1)*v[j];
    
}

ans=min(k1+k2,ans);

}
cout<<ans<<endl;





}
signed main(){

solve();

}