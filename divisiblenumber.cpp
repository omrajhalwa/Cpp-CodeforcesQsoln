#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){

int a,b,c,d;
cin>>a>>b>>c>>d;


for(int i=a+1;i<=c;i++){
    int k=((a*b)/__gcd(a*b,i));
    int p=(b+1)/k;
    if((b+1)%k!=0)p++;
    if(p*k<=d){
        cout<<i<<" "<<p*k<<endl;
        return;
    }
}


cout<<-1<<" "<<-1<<endl;

}
signed main(){

int t;cin>>t;
while(t--){
    solve();
}

}