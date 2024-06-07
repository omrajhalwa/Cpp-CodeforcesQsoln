#include<bits/stdc++.h>
using namespace std;
#define int long long
#define TESTLIMITPASSKARADE std::ios sync_with_stdio (NULL); cin.tie(0); cout.tie(0);
signed main(){
TESTLIMITPASSKARADE
int t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
int cnt=0;
for(int i=0;i<32;i++){
    if(n%m==0){
        
        break;
    }
    n%=m;
    cnt+=n%m;
    n*=2;
    
}
if(n%m!=0) cout<<-1<<endl;
 else cout<<cnt<<endl;
}

}