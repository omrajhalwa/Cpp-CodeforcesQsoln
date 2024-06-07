#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>v(n);
for(int &x:v){
    cin>>x;
}
sort(v.begin(),v.end());
int mn=INT_MAX;
int p,k;
for(int i=0;i<n-1;i++){
    if(mn>=(v[i+1]-v[i])){
    p=i;k=i+1;
    mn=v[i+1]-v[i];
    }
}

if(mn==v[1]-v[0]){
cout<<v[0]<<" ";
for(int i=1;i<n;i++){
    if(i!=1){
    cout<<v[i]<<" ";}
}
cout<<v[1]<<endl;
}else if(mn==v[n-1]-v[n-2]){
cout<<v[n-2]<<" ";
for(int i=0;i<n;i++){
    if(i!=n-2){
        cout<<v[i]<<" ";
    }
    
}cout<<endl;
}else{
cout<<v[p]<<" ";
for(int i=k+1;i<n;i++){
        cout<<v[i]<<" ";
    
}

for(int i=0;i<p;i++){
    cout<<v[i]<<" ";
}cout<<v[k]<<endl;
}

}
}