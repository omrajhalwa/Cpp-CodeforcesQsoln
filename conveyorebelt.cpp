#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
     ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
int t;cin>>t;
while(t--){
int n,x1,y1,x2,y2;
cin>>n>>x1>>y1>>x2>>y2;

int a,b;
a=min(min(abs(x1-1),abs(x1-n)),min(abs(y1-1),abs(y1-n)));
b=min(min(abs(x2-1),abs(x2-n)),min(abs(y2-1),abs(y2-n)));



cout<<abs(a-b)<<endl;
}
}