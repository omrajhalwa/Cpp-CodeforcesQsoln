#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
int n;cin>>n;
vector<int>v(n);
for(int&x:v){
    cin>>x;
}



if(n>1){
int mx=-1,j=-1;
vector<int>ans;
for(int i=0;i<n;i++){
if(i>0){
if(mx<v[i]){
    mx=v[i];
    j=i;
}
}
}
int k=0;
if(j==n-1){
    k=j-1;
    ans.push_back(v[j]);
}else{
    k=j-2;
    for(int i=j;i<n;i++){ans.push_back(v[i]);}
    ans.push_back(v[j-1]);

}

while(k>=0){

if(v[0]>v[k]){
    for(int i=0;i<=k;i++){ans.push_back(v[i]);}
    break;
}else{
    ans.push_back(v[k]);
    k--;
}


}

 for(auto it:ans){cout<<it<<" ";}
}else{
    cout<<v[0];
}



cout<<endl;



}
signed main(){
int t;cin>>t;
while(t--){
solve();
}
}