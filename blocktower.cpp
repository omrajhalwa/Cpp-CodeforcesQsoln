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
sort(v.begin()+1,v.end());
int in=v[0],sum=0;
for(int i=1;i<n;i++){

if(v[i]>v[0]){
v[0]=(v[i]+v[0])-(v[i]+v[0])/2;
}

}
cout<<v[0]<<endl;
}
}