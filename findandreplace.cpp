#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
string s="";
cin>>s;
bool give=true;
map<char,int>mp;
for(int i=0;i<n;i++){
    mp[s[i]]=-1;
}
for(int i=0;i<n;i++){
    
    if(mp[s[i]]==-1){
        mp[s[i]]=i;
    }else{
        if(mp[s[i]]%2==i%2){

        }else{
            give=false;

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