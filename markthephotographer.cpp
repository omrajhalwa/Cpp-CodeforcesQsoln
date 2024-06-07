#include<bits/stdc++.h>
using namespace std;
#define int long long







signed main(){
    int t;cin>>t;
    while(t--){
int n,x;
cin>>n>>x;
vector<int>v(2*n);
for(int i=0;i<2*n;i++){
    cin>>v[i];
}
bool give=true;
sort(v.begin(),v.end());
for(int i=n;i<2*n;i++){
   // cout<<v[i]-v[i-n]<<endl;
    if(v[i]-v[i-n]>=x){
 //cout<<v[i]<<" "<<v[i-n]<<endl;
    }else{
        give=false;
    }
}

if(give){cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}
}
}