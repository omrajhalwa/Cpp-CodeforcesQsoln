#include<bits/stdc++.h>
using namespace std;
//QUESTION PADHLIYA KR ACCHE SE GADHE
#define int long long
signed main(){
    int t;cin>>t;
    while(t--){
int n;
cin>>n;
string s="";
int l=0,r=0;
cin>>s;
for(int i=0;i<n;i++){
    if(s[i]=='L')l++;
    else r++;
}
int k=0,ans=0,m=0;
for(int i=0;i<n;i++){
if(s[i]=='R'){
    k=i;break;
}
}for(int i=n-1;i>=0;i--){
if(s[i]=='L'){
    m=i;break;
}
}for(int i=0;i<n;i++){
    if(s[i]=='L'&&s[i+1]=='R'){
        ans=i;
        break;
    }
}
if(l==0||r==0){
    cout<<-1<<endl;
}else if(k<m){
cout<<0<<endl;}
else
cout<<ans+1<<endl;

    }



}