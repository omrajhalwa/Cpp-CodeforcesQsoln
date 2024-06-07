#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){


int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());
vector<int>c;
c.push_back(v[0]);
for(int i=0;i<n;i++){
    if(i<n-1)
    c.push_back(v[i+1]-v[i]);
}
sort(c.begin(),c.end());

cout<<c[c.size()-1]<<endl;


}
}