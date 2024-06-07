#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){

int n,q;cin>>n>>q;
vector<int>v(n+1);
map<int,int>mp;
int sum=0;
for(int i=1;i<=n;i++){
    cin>>v[i];
    sum+=v[i];
    mp[i]=v[i];
}
while(q--){
int t;cin>>t;
if(t==1){
    int a,b;
    cin>>a>>b;
if(mp[a]==0){
    sum=sum-mp[-1]+b;
}else{
    
    sum=sum-mp[a]+b;

}
mp[a]=b;

    cout<<sum<<endl;
}else{
    mp.clear();
    
int c;cin>>c;
mp[-1]=c;
sum=n*c;
cout<<n*c<<endl;


}




}




}