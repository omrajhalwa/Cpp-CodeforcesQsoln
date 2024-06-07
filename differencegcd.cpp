#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){

int t;
cin>>t;
while(t--){
int n,l,r;
cin>>n>>l>>r;

vector<int>v;bool give=true;
for(int i=1;i<=n;i++){
    if(l%i==0){
        v.push_back(l);
    }else if(l+i-(l%i)<=r){
        v.push_back(l+i-(l%i));
    }else{
        give=false;
    }
}
if(give){
    cout<<"YES"<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }cout<<endl;
}else{
    cout<<"NO"<<endl;
}

}
}