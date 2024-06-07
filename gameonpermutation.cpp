#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
    int ans=0;
    int n;cin>>n;
    vector<int>v(n);
    for(int &x:v){cin>>x;}
  int mn1=v[0],mn2=n+2;

   for(int i=0;i<n;i++){
       if(mn1<v[i]&&v[i]<mn2){
        ans++;
       }
       if(v[i]<mn1)mn1=v[i];
       if(v[i]>mn1)mn2=min(mn2,v[i]);
    }
cout<<ans<<endl;
}

}