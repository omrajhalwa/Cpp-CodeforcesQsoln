#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){

int n;cin>>n;
vector<int>v(n);
for(int &x:v){cin>>x;}

vector<int>ans;
ans.push_back(v[0]);

for(int i=1;i<n;i++){
    if(v[i-1]<=v[i]){
        ans.push_back(v[i]);
    }else{
        ans.push_back(v[i]);
        ans.push_back(v[i]);
    }
}
cout<<ans.size()<<endl;
for(auto it:ans){cout<<it<<" ";}
cout<<endl;
}
}