#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

int t;
cin>>t;
while(t--){


string k="",s="";
cin>>s;
k=s;
int n;
cin>>n;
sort(k.begin(),k.end());
int c=0;
map<char,int>mp;
for(int i=0;i<k.size();i++){
c+=k[i]-'a'+1;
if(c<=n){
    mp[k[i]]++;
}
}
string v="";

for(int i=0;i<s.size();i++){
    if(mp.find(s[i])!=mp.end()){
        if(mp[s[i]]>0){
            v.push_back(s[i]);
            mp[s[i]]--;
        }
    }
}



cout<<v<<endl;
}
}

