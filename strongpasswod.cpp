#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
string s="";cin>>s;
int m;cin>>m;
string a="";
string b="";
cin>>a>>b;
string ans="";
for(int i=0;i<m;i++){
    int mx=0;bool give=true;
    map<int,char>mp;
    for(int j=a[i]-'0';j<=b[i]-'0';j++){
        for(int k=s.size()-1;k>=0&&give;k--){
          if(s[k]-'0'==j){
            mp[1000000-k]=s[k];
            k=-1;
          }
        }
    }
    auto it=mp.begin();
    ans.push_back(it->first);
    
}
cout<<ans<<endl;

int j=0;
for(int i=0;i<s.size()&&j<ans.size();i++){
if(s[i]==ans[j]){
j++;
}
}
if(j==ans.size()){
    cout<<"NO"<<endl;
}else{
    cout<<"YES"<<endl;
}

}
}