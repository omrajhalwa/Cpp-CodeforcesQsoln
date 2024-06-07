#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;cin>>t;
    while(t--){
    int n;cin>>n;
    vector<int>v(n);
    map<int,int>mp;int zero=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
      if(v[i]==0)  zero++;
        mp[v[i]]++;
    }

if(zero==0||mp[0]-1<=n-mp[0]){
    cout<<0<<endl;
}else if(mp.size()==1){
    cout<<1<<endl;

}else if(mp.size()==2&&mp[1]!=0){
    cout<<2<<endl;
}else{
    cout<<1<<endl;
}
}
}