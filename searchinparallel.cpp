#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;
cin>>t;
while(t--){
int n,s1,s2;
cin>>n>>s1>>s2;
vector<pair<int,int>>v;
for(int i=1;i<=n;i++){
    int x;cin>>x;
    v.push_back({x,i});
}
sort(v.begin(),v.end());
vector<int>ans1,ans2;

int a=s1,b=s2;
for(int i=n-1;i>=0;i--){

if(a<b){
ans1.push_back(v[i].second);
    a+=s1;
}else{
ans2.push_back(v[i].second);
    b+=s2;
}


}




cout<<ans1.size()<<" ";
for(auto it:ans1){
    cout<<it<<" ";
}cout<<endl;
cout<<ans2.size()<<" ";
for(auto it:ans2){
    cout<<it<<" ";
}cout<<endl;

}
}