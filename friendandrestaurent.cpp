#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
int t;cin>>t;while(t--){
int n;cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
vector<int>c;
for(int i=0;i<n;i++){
    int a;cin>>a;
    c.push_back(a-v[i]);
}
sort(c.begin(),c.end());
int ans=0;int i=0,j=n-1;
while(i<j){


if(c[i]<0&&c[j]>=0){
if(abs(c[i])<=abs(c[j])){
    j--;i++;
    ans++;
}else{
    i++;
}
}else if(c[i]>=0&&c[j]>=0){
    ans++;
    j--;
    i++;
}else{
    i++;
}


}
cout<<ans<<endl;
}
}