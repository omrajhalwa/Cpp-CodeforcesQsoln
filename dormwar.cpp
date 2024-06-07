#include<bits/stdc++.h>
using namespace std;


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;cin>>t;while(t--){
int n;
cin>>n;
string s;cin>>s;

int k;cin>>k;
vector<int>v;
for(int i=0;i<k;i++){
    char op;cin>>op;
    for(int i=0;i<n;i++){
        if(op==s[i]){
            v.push_back(i);
        }
    }
}
sort(v.begin(),v.end());

int ans=0;
if(v.size()>0){
int mx=v[0];

for(int i=1;i<v.size();i++){
    mx=max(mx,v[i]-v[i-1]);
}

ans=mx;





}






cout<<ans<<endl;





}





}