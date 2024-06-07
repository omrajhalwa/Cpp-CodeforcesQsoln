#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>v(n);
int ans=-1;
for(int&x:v){cin>>x;}
sort(v.begin(),v.end());
for(int i=0;i<n;i++){
    if(n-1-i>=v[i]){
        ans=n-1-i;
    }
}
cout<<ans<<endl;
}

}