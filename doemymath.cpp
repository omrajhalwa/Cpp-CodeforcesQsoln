#include<bits/stdc++.h>
using namespace std;
 
int main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
k=v[0];
 for(int i=1;i<n;i++){
    k=__gcd(k,v[i]);
}
cout<<v[n-1]/k<<endl;
 
}
 
 
 
 
 
 
 
}