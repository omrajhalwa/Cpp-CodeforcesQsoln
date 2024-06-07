#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){


int t;cin>>t;
while(t--){
int n;
cin>>n;

string s="";
cin>>s;
int ans=0;
for(int i=0;i<s.size();i++){
    if(i>0&&s[i]=='('&&s[i-1]==')'){

    }else if(s[i]=='('){
        ans++;
    }
}

cout<<ans<<endl;

}
}