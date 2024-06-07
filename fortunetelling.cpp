#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){

int t;cin>>t;
while(t--){
int n,k,m;
cin>>n>>k>>m;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int a=m^k;

for(int i=0;i<n;i++){
    a^=v[i];
    
}//tutorial...........................
if(a%2==0){
    cout<<"Alice"<<endl;
}else {
    cout<<" Bob"<<endl;
}
}

}
