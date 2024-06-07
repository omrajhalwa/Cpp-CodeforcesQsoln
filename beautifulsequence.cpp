#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){

int t;cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n+1);
for(int i=1;i<=n;i++){
    cin>>v[i];
}
bool give=false;
for(int i=1;i<=n;i++){
    if(v[i]<=i){
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