#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
int n;cin>>n;
vector<int>v(n+1);

for(int i=0;i<n;i++){
    cin>>v[i];
}v[n]=n+1;
sort(v.begin(),v.end());

int i=0,ans=0,p=0;
bool give=false;
while(i<=n){

if(v[i]<=i){
    give=true;
    i++;
}else if(v[i]>i&&!give){
i=v[i];
}else if(v[i]>i&&give){
    ans++;
    give=false;
}



}

if(v[0]!=0){cout<<ans+1<<endl;}
else{
    cout<<ans<<endl;
}
}
}