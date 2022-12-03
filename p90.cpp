#include<bits/stdc++.h>
using namespace std;

int main(){
int n,a,v=0,q,r,t,y,u,o;
vector<int>s;
 int g[1002];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a;
    s.emplace_back(a);
    g[i]=s[i];
}
sort(s.begin(),s.end());

for(int p=0;p<n-2;p++){
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-2;j++){
        if(s[n-1-p]==s[n-2-i-p]+s[n-3-j-p]){
        q=s[n-1-p];
        
        r=s[n-2-i-p];
        t=s[n-3-j-p];
        v++;
        }
    }
}
}


int b=0,c=0,d=0;
if(v>0){
for(int i=n-1;i>=0;i--){
if(g[i]==q){
    cout<<g[i]<<" ";
    break;
}}
for(int i=0;i<n;i++){
if(g[i]==r){
    cout<<g[i]<<" ";
    break;
}}for(int i=0;i<n;i++){
    if(g[i]==t){
    cout<<g[i]<<" ";
    break;
}


}


   }
else{
    cout<<"-1";
}


}