#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

    ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
vector<int>v(n);
map<int,int>mp;
bool give=false;
for(int i=0;i<n;i++){cin>>v[i];
mp[v[i]];}sort(v.begin(),v.end());reverse(v.begin(),v.end());

for(int i=0;i<n;i++){

    auto it=mp.find(v[i]-k);
    if(it!=mp.end()){
        give=true;break;
    }

}

if(give){cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}

}
}