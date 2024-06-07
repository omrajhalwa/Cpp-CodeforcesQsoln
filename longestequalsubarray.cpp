#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){

int n,k;cin>>n>>k;
vector<int>v(n);
int ans=0;
for(int &x:v){cin>>x;}


int i=0,j=0;

map<int,int>mp;mp[v[j]]++;
int a=0;bool give=false;
while(i<n){

//cout<<i<<" ";
if(j-i+1-mp[v[i]]>k){
   a=v[i];
   give=true;
}
    ans=max(ans,mp[v[i]]);


if(give){
    i++;
    if(v[i]!=a){
        give=false;
    }
}else{j++;
    if(j<n){

mp[v[j]]++;
cout<<mp[v[j]]<<" "<<v[j]<<endl;
    }

}
}


cout<<ans<<endl;
}