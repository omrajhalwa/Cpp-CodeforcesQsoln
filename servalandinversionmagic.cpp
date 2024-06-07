#include<bits/stdc++.h>
using namespace std;

signed main(){

    int t;cin>>t;
    while(t--){
    int n;cin>>n;
    string s;cin>>s;

vector<int>v;

for(int i=0;i<n/2;i++){
    if(s[i]!=s[n-(i+1)]){
        v.push_back(i);
    }
}
bool give=true;
if(v.size()>0){
for(int i=0;i<v.size()-1;i++){
    if(v[i]+1!=v[i+1]){
        give=false;break;
    }
}
}
if(give){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}
}