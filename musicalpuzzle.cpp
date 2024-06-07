#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
int n;cin>>n;
string s="";
cin>>s;
map<string,int>mp;
for(int i=0;i<n-1;i++){
    string k="";
    k.push_back(s[i]);
    k.push_back(s[i+1]);
    mp[k]++;
}
cout<<mp.size()<<endl;

}
signed main(){
int t;cin>>t;
while(t--){
solve();
}
}