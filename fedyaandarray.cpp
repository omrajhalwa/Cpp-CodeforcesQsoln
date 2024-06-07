#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){


int t;cin>>t;
while(t--){
int n,m;
cin>>n>>m;
vector<int>v;
for(int i=n;i>=m;i--){
    v.push_back(i);
}for(int i=m+1;i<n;i++){
    v.push_back(i);
}
cout<<v.size()<<endl;
for(auto it:v){
    cout<<it<<" ";
}cout<<endl;

}

}