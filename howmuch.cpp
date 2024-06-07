


#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    map<int,int>mp;
    for(int &x:v){
        cin>>x;
        mp[x]++;
    }

    if(mp[k]>0)  cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}