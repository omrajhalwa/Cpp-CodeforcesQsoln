#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    int t;cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>v(k*n);
    for(int i=0;i<k*n;i++){
        cin>>v[i];
    }

    int ans=0;
   for(int p=1;p<=n;p++){
    for(int j=k*p-1;j>=k*(p-1);j--){
        int i=k*(p-1);
    while(i<j){
    if(v[i]<v[j]){
     ans++;
    }
     i++;

    }
    }
   }
    cout<<ans<<endl;
    }
}