#include<bits/stdc++.h>
using namespace std;

signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
string s="";string k="";
cin>>s;
k.push_back(s[0]);bool give=false;
for(int i=1;i<n;i++){
    if(s[i]<s[i-1]){
        k.push_back(s[i]);
        give=true;
    }else if(give&&s[i]==s[i-1]){
         k.push_back(s[i]);
    }else{
        break;
    }
}
string p=k;
reverse(k.begin(),k.end());
p=p+k;
cout<<p<<endl;
}

}