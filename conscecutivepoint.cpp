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
bool give=true;
int diff=0;
for(int i=0;i<n-1;i++){
    diff=diff+v[i+1]-v[i];

    if(diff<=i+3){

    }else{
        give=false;
        break;
    }
   
}
if(give){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}


    }
}