#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
    ios::sync_with_stdio(false);
cin.tie(0);
int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>v(n);

for(int i=0;i<n;i++){
    cin>>v[i];
   
}
bool give=true;int cnt=0;
for(int i=1;i<n;i<<=1){

    for(int j=0;j<n;j+=2*i){
        if(abs(v[j]-v[j+i])!=i){give=false;}
        if(v[j]>v[j+i]){swap(v[j],v[j+i]);cnt++;}
    }
}// ................tutorial

if(give){
    cout<<cnt<<endl;
}else{
    cout<<-1<<endl;
}

}
}