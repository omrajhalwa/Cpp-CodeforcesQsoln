#include<bits/stdc++.h>
using namespace std;
using  ll= long long;

signed main(){

int t;
cin>>t;
while(t--){

ll n;
cin>>n;
vector<ll>v(n);
vector<ll>b(n+1);
b[n]=0;
for(int i=0;i<n;i++){
    cin>>v[i];
    b[i]=v[i];
}
bool give=true;
if(n==1||n==2){
    
}else{
long long lmax=v[0];
for(int i=1;i<n-1;i++){
    if(lmax>v[i]&&v[i]<v[i+1]){
        give=false;
    }
   
    lmax=max(lmax,v[i]);
}



}



if(give){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}


}









}