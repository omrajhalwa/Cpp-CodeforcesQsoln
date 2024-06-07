#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    int t;cin>>t;
    while(t--){
int n;cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());
auto istrue=[&](){
    int zero=0,one=0;
    for(int i=0;i<n;i++){
       
        if(v[i]==0){
            zero++;}
        if(v[i]==1){
            one++;}
    }
if(one==0){
    return true;
}else if(zero>0&&one>0){
    return false;
}else{
    
for(int i=0;i<n;i++){
    if(v[i]!=1){
        if(v[i]-v[i-1]>1||v[i]==v[i-1]){
//please
        }else{
            return false;
        }
    }
}
return true;



}


};

if(istrue()){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}
}