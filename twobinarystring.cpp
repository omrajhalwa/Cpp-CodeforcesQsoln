#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);


int t;cin>>t;
while(t--){
string s="";
cin>>s;
string k="";
cin>>k;
bool give=false;
for(int i=0;i<s.size()-1;i++){

if((s[i]==k[i]&&s[i]=='0')&&(s[i+1]==k[i+1]&&s[i+1]=='1')){
    give=true;
}
}




if(give){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}

}

}