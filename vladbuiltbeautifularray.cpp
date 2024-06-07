#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
int n,k;cin>>n;
vector<int>v(n);
for(int&x:v){
    cin>>x;
}
sort(v.begin(),v.end());
bool give=true;
for(int i=0;i<n;i++){
    if(i>0&&v[0]%2==0){

    if(v[i]%2!=0){give=false;}



    }
}
if(give){cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}

}
signed main(){
int t;cin>>t;
while(t--){
solve();
}
}