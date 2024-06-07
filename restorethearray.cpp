#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
     ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>v(n-1);
for(int i=0;i<n-1;i++){
    cin>>v[i];
}
bool give=true;
for(int i=0;i<n-1;i++){
if(i<n-2&&give&&v[i]<v[i+1]){
cout<<v[i]<<" "<<v[i]<<" ";
give=false;
}else{
    cout<<v[i]<<" ";
}
}
if(give){
    cout<<0<<" ";
}
cout<<endl;


}
}