#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
    int n;cin>>n;
    vector<int>v(n);int even=0,odd=0;
    for(int i=0;i<n;i++){cin>>v[i];
    if(v[i]%2==0){even+=v[i];}
    else{odd+=v[i];}
    }
if(even>odd){cout<<"YES"<<endl;}
else{
    cout<<"NO"<<endl;
}

}
}