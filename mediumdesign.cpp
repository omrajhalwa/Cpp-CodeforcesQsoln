#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
vector<pair<int,int>>p;
set<int>st;
for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    p.push_back({a,b});
    st.insert(a);
st.insert(b+1);
}

map<int,int>mp;
int cnt=1;
for(auto it:st){
    mp[it]=cnt++;
}

vector<int>ans1(cnt+10,0),ans2(cnt+10,0);
int x,y;
for(int i=0;i<n;i++){
    x=p[i].first;
    y=p[i].second;
    if(x!=1){
    ans1[mp[x]]++;
    ans1[mp[y+1]]--;
    }if(y!=k){
        ans2[mp[x]]++;
        ans2[mp[y+1]]--;
    }


}

int mx=0;
for(int i=1;i<ans1.size();i++){
    ans1[i]+=ans1[i-1];
    ans2[i]+=ans2[i-1];
  //  cout<<ans1[i]<<" "<<ans2[i];
    mx=max(mx,ans2[i]);
    mx=max(mx,ans1[i]);

}

cout<<mx<<endl;

}

}