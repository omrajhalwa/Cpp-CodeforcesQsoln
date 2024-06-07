#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int t;
cin>>t;
while(t--){
int n;cin>>n;
vector<int>v(n);
int neg=0;
int sum=0;
int mn=INT64_MAX;
for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]<0){
        neg++;
    }
    mn=min(mn,abs(v[i]));
    sum+=abs(v[i]);
    
}
if(neg%2==0){
    cout<<sum<<endl;
}else{
    cout<<sum-2*mn<<endl;
}
}
}