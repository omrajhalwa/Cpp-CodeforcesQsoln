#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

int t;cin>>t;
while(t--){
int n;
cin>>n;

if(n%10==9){
    vector<int>v;
    vector<int>v1;
    vector<int>v2;
    while(n>0){
v.push_back(n%10);
n=n/10;
    }
    int p=0;
for(int i=0;i<v.size();i++){

if(v[i]%2==0){

v1.push_back(v[i]/2);
v2.push_back(v[i]/2);
}else{
if(p%2==0){
v1.push_back(v[i]/2);
v2.push_back(v[i]/2+1);
p++;
}else{
    v1.push_back(v[i]/2+1);
v2.push_back(v[i]/2);p++;
}
}
}
reverse(v1.begin(),v1.end());
reverse(v2.begin(),v2.end());
int k=0,l=0;
for(int i=0;i<v1.size();i++){
    if(v1[i]!=0||k>0){
    cout<<v1[i];k++;}
}cout<<" ";
for(int i=0;i<v2.size();i++){
    if(v2[i]!=0||l>0){
    cout<<v2[i];l++;}
}cout<<endl;
}else{

if(n%2==0){
    cout<<n/2<<" "<<n/2<<endl;
}else{
     cout<<n/2<<" "<<n/2+1<<endl;
}

}




}

}