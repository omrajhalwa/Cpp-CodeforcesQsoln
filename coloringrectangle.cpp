#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n,m;
cin>>n>>m;
int k;
k=n*m;

if(k%3==0){
    cout<<k/3<<endl;
}else if(k%3!=0){
    cout<<k/3+1<<endl;
}


}

}
