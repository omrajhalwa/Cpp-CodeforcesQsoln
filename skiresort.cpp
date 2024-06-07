#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

int t;cin>>t;
while(t--){
int n,k,q;
cin>>n>>k>>q;
vector<int>v(n);
for(int &x:v){cin>>x;}
v.push_back(1000000004);

int no=0;
vector<int>c;

for(int i=0;i<n+1;i++){
    if(v[i]<=q){
        no++;
    }else if(no>=k){
        c.push_back(no);
        no=0;
    }else{
        no=0;
    }
}
int ans=0;
for(auto it:c){
    int mo=it;
    mo=mo-k+1;
    ans+=mo*(mo+1)/2;
    }
cout<<ans<<endl;

}

}