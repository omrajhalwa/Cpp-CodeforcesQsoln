#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){

ios::sync_with_stdio(false);
cin.tie(0);

int t;
cin>>t;
while(t--){
int n,c,d;
cin>>n>>c>>d;
vector<int>v;
set<int>st;int dup=0;
for(int i=0;i<n;i++){
    int x;cin>>x;
   // st.insert(x);
    if(st.find(x)!=st.end()){
        
        dup+=c;
    }
st.insert(x);
}
for(auto it:st){
    v.push_back(it);
}
int ans=INT_MAX;


for(int i=0;i<v.size();i++){
    
ans=min(ans,(c*(v.size()-i-1)+d*(v[i]-i-1)));
    
    
}












cout<<ans+dup<<endl;
}
}