#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){

int t;cin>>t;
while(t--){
int n;cin>>n;int j,k;
vector<int>v(n);
for(int &x:v)cin>>x;
int mn=INT_MAX,mx=INT_MIN;
vector<pair<int,int>>p;
for(int i=0;i<n;i++){
    if(mx<v[i]){
      mx=v[i];
      j=i;
    }if(mn>v[i]){
        mn=v[i];
        k=i;
    }
}

if(abs(mx)>abs(mn)||(mx==mn&&mn>=0)){
    for(int i=0;i<n;i++){
        if(v[i]<0){
            p.push_back({i+1,j+1});
        }
    }
    for(int i=0;i<n-1;i++){
    p.push_back({i+2,i+1});
}
}else{
 for(int i=0;i<n;i++){
        if(v[i]>0){
            p.push_back({i+1,k+1});
        }
    }
for(int i=n-1;i>=1;i--){
    p.push_back({i,i+1});
}


}




cout<<p.size()<<endl;
for(auto it:p){
    cout<<it.first<<" "<<it.second<<endl;
}
}
}