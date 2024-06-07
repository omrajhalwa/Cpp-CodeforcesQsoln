#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
vector<string>v;
vector<vector<int>>ans(n,vector<int>());
for(int i=0;i<n;i++){
    string s="";
    cin>>s;
    v.push_back(s);
}




for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(v[i][j]=='1'){
            ans[j].push_back(i+1);
        }
}
}
for(int i=0;i<n;i++){
    ans[i].push_back(i+1);
}

for(int i=0;i<n;i++){
   // sort(ans[i].begin(),ans[i].end());
   cout<<ans[i].size()<<" ";
    for(int j=0;j<ans[i].size();j++){
          cout<<ans[i][j]<<" ";
    }cout<<endl;
}

}

}