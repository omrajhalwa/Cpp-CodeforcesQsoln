#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){

int x;cin>>x;
int a=x,b=0;
 for(int i=31;i>=0;i--){
        if( x & (1 << i) > 0) continue;
        if (2 * x - a - b >= (2 << i)){
            a += (1 << i);
            b += (1 << i);
        }

 }
 cout<<a<<" "<<b<<endl;
    if (a + b == 2 * x && (a ^ b) == x){
    cout<<a<<" "<<b<<endl;
    }
    else cout<<-1<<endl;
        

}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

int t;cin>>t;
while(t--){
    solve();
}

  //solve();
}