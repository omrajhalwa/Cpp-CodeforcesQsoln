#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>v(n);
map<int,int>mp;int sum=0;
for(int &x:v){cin>>x;mp[x]++;sum+=x;}

auto val=[&](){
int ans=0;
if((sum*2)%n!=0){
    return (long long)0;
}
int p=((sum*(2))/n);
for(int i=0;i<n;i++){
    if(mp[(p-v[i])]!=0){
        ans+=mp[(p-v[i])];
    }
     if((p-v[i])==v[i]){
         ans-=1;
    } 
    
}
return ans/2;
};
cout<<val()<<endl;


}
}