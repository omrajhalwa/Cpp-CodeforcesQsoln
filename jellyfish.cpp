#include<bits/stdc++.h>
using namespace std;
#define int long long
// jai shree ram......
// jai bajrangbali....





signed main(){
int t;
cin>>t;
while(t--){
int b,a,n;
cin>>b>>a>>n;
vector<int>v(n);
int sum=0;
for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]>=b){v[i]=b;sum--;}
    sum+=v[i];
}

cout<<sum+a<<endl;
}
	
}