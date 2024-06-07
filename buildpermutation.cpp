#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;cin>>t;
    while(t--){
int n;cin>>n;
vector<int>v;
for(int i=0;i<=1000;i++){
v.push_back(i*i);
}
map<int,int>mp;


int i=n-1;auto it=lower_bound(v.begin(),v.end(),i);
int p=v[it-v.begin()]-i;
int k=v[it-v.begin()];
while(i>=0)
{
    mp[i]=k-i;

    if(i==p){
        it=lower_bound(v.begin(),v.end(),i-1);
         p=v[it-v.begin()]-i+1;
         k=v[it-v.begin()];
    }



i--;

}

for(auto it:mp){
    cout<<it.second<<" ";
}cout<<endl;
}
//all about jugaad.........

}