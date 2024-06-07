#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
string s="";
cin>>s;
int cons=0,mx=0,n=s.size();
for(int i=0;i<s.size();i++){
if(s[i]=='1'){
    cons++;
}else{
    mx=max(mx,cons);
    cons=0;
}
}
int maxi=0;
if(s[0]=='1'||s[n-1]=='1'){
for(int i=0;i<n;i++){
if(s[i]=='1'){
maxi++;
}else{
    break;
}
}for(int i=n-1;i>=0;i--){
if(s[i]=='1'){
maxi++;
}else{
    break;
}
}

}


int cnt=max(maxi,mx);
int a,b;
if((cnt-1)%2==0){
    a=(cnt+1)/2;
    b=(cnt+1)/2;
}else{
    a=(cnt+1)/2+1;
    b=(cnt+1)/2;
}
if(cons!=n){
cout<<a*b<<endl;
}else{
    cout<<n*n<<endl;
}
}
}