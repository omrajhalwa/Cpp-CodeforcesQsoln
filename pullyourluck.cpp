#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--){
int n,k,p;
cin>>n>>k>>p;
bool give=false;
for(int i=1;i<=2*n;i++){
    int x=i*(i+1)/2;
    if((n-(x%n))%n==k&&i<=p){
        give=true;
    }
}
if(give){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}

}

}