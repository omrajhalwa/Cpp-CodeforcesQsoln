#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){

int n;cin>>n;
vector<int>v(n);
for(int &x:v){cin>>x;}

vector<pair<int,int>>p;

if(n==1){cout<<0<<endl;}
else{

p.push_back({1,n});
if(v.size()>2){
for(int i=1;i<n-1;i++){
    if((v[i]+v[0])%2==0){
        p.push_back({i+1,n});
    }else{
        p.push_back({1,i+1});
    }
}}
//tutorial hint
cout<<p.size()<<endl;
for(auto it:p){
    cout<<it.first<<" "<<it.second<<endl;
}


}

}
}