#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n;
cin>>n;
int x=0;

for(int i=1;i<=n;i++){
    if(n%i!=0){
      x=i;break;
    }
}

string s="abcdefghijklmnopqrstuvwxyz";
int k=0;
while(n--){
    cout<<s[k];k++;
    if(k==x){k=0;}
}cout<<endl;
}
}