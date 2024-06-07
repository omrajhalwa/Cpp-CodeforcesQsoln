#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){


int t;
cin>>t;
while(t--){
int n;
cin>>n;
int k;

    k=n/2;

vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];

}
sort(v.begin(),v.end());

vector<pair<int,int>>c;

for(int i=1;i<=k;i++){
    c.push_back(make_pair(v[i],v[0]));
}

for(auto it:c){
    cout<<it.first<<" "<<it.second<<endl;
}
}
}