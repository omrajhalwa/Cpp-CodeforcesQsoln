#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
int n;
cin>>n;




for(int i=2;i<=62;i++){
    int x=pow(2,i);

    if(n%(x-1)==0){
        cout<<n/(x-1)<<endl;
        break;
    }
}


}}