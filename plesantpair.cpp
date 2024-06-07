#include<bits/stdc++.h>
using namespace std;
#define int long long




signed main(){
    ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>v(n+2);

for(int i=1;i<=n;i++){
    cin>>v[i];
    
}


int ans=0;

for(int i=1;i<=n;i++){



for(int j=v[i]-i;j<=n;j+=v[i]){
if(j<=i){
    continue;
}if(i+j==v[i]*v[j]){
    ans++;
}

}





}

cout<<ans<<endl;

}
}