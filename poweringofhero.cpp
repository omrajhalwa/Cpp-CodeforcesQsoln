#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
     ios::sync_with_stdio(false); cin.tie(0);
     int t;cin>>t;
     while(t--){
int n;cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int ans=0;
priority_queue<int>pq;
for(int i=0;i<n;i++){
    if(v[i]!=0){
    pq.push(v[i]);
    }
    if(v[i]==0&&!pq.empty()){
        ans+=pq.top();
        pq.pop();
    }
    
}
cout<<ans<<endl;
}
}