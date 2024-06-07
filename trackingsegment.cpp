#include<bits/stdc++.h>
using namespace std;
#define int long long
//binary search ko pranam
signed main(){
int t;cin>>t;
while(t--){
int m,n;
cin>>m>>n;
vector<pair<int,int>>v(n);
for(int i=0;i<n;i++){
    cin>>v[i].first>>v[i].second;
}
int q;cin>>q;
vector<int>query(q);
for(int &x:query){cin>>x;}



int start=1,end=q;

auto check=[&](int x){

vector<int>hash(m+1,0);
for(int i=0;i<x;i++){
    hash[query[i]]=1;
}
int cnt=0;
vector<int>pre(m+1,0);
for(int i=1;i<=m;i++){
if(hash[i]==1){cnt++;}
pre[i]=cnt;

}

for(int i=0;i<n;i++){
    int temp1=v[i].first;
    int temp2=v[i].second;
    if(pre[temp2]-pre[temp1-1]>(temp2-temp1+1)/2){
        return true;
    }
}

return false;

};


int ans=-1;
while(start<=end){
    int mid=start+(end-start)/2;

if(check(mid)){
    ans=mid;
    end=mid-1;
}else{
    start=mid+1;
}

}


cout<<ans<<endl;
}
}