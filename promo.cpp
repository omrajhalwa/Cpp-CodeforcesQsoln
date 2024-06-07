#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){


int n,k;
cin>>n>>k;
vector<int>v(n);

for(int i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());
vector<int>c;int p=v[n-1];c.push_back(0);
c.push_back(p);
for(int i=n-2;i>=0;i--){

    p+=v[i]; c.push_back(p);
}
for(int i=0;i<k;i++){int x,y;
    cin>>x>>y;
    cout<<c[x]-c[x-y]<<endl;
}




}