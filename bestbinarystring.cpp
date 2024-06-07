#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){

string s="";
cin>>s;
string k="";

int n=s.size();
string p="";int cnt=0;
for(int i=0;i<s.size();i++){
 if(s[i]!='?'){
    p.push_back(s[i]);
 }else{
    cnt++;
 }
 k.push_back('1');
}

for(int i=0;i<n;i++){
    if(i>0&&s[i]=='?'){
      s[i]=s[i-1];
    }
}for(int i=n-2;i>=0;i--){
    if(i<n-1&&s[i]=='?'){
      s[i]=s[i+1];
    }
}
if(cnt!=n){
cout<<s<<endl;
}else{
    cout<<k<<endl;
}



}

}