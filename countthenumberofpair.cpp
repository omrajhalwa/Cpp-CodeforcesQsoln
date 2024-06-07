#include<bits/stdc++.h>
using namespace std;

signed main(){
int t;cin>>t;while(t--){
int n,k;cin>>n>>k;
string s="";cin>>s;
map<char,int>mp;
map<char,int>m;
for(int i=0;i<s.size();i++){
    mp[s[i]]++;
}
int ans=0,op=0;
for(int i=0;i<n;i++){
if(m[s[i]]!=-1){
    if(islower(s[i])){
        ans+=min(mp[s[i]],mp[s[i]-32]);
        op+=abs(mp[s[i]]-mp[s[i]-32])/2;
        m[s[i]]=m[s[i]-32]=-1;
    }else{
        ans+=min(mp[s[i]],mp[s[i]+32]);
        op+=abs(mp[s[i]]-mp[s[i]+32])/2;
        m[s[i]]=m[s[i]+32]=-1;
    }
    
}
}
if(op>k){ans+=k;}else{ans+=op;}
cout<<ans<<endl;


}

}