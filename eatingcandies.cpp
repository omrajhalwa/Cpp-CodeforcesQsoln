#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int t;cin>>t;
while(t--){

int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int p=0;
int r=0;vector<int>c,b;
map<int,int>mp;
for(int i=0;i<n;i++){
    p+=v[i];
    mp[p]=i+1;
    c.push_back(p);
}for(int i=n-1;i>=0;i--){
    r+=v[i];
    b.push_back(r);
}int mx=0;
for(int i=0;i<b.size();i++){
    if(mp[b[i]]>0){

        if(mp[b[i]]<n-i){
            mx=max(mx,mp[b[i]]+i+1);
        }
    }
}

cout<<mx<<endl;


}



}