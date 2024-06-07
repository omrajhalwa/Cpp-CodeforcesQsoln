#include<bits/stdc++.h>
using namespace std;

signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
string s="";
cin>>s;
int i=1;
int ans=1;
while(i<s.size()-1){
     
     if(i>0&&i<n-1&&s[i+1]==s[i-1]){

     }else{
        ans++;
     }
     i++;
}
cout<<ans<<endl;

}

}