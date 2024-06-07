#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){

int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
vector<int>v(k);
for(int i=0;i<k;i++){
    int p;
    cin>>p;
    v[i]=n-p;
}

sort(v.begin(),v.end());
vector<int>pre;
int p=0;
for(int i=0;i<k;i++){
    p+=v[i];
pre.push_back(p);
}
int ans=0;
    for(int i=0;i<k;i++){
        if(pre[i]<n){
            ans++;
        }
    }

cout<<ans<<endl;


}




}