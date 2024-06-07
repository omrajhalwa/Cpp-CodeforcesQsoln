#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;

while(t--){
int n,m;
cin>>n>>m;
int x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;

int ans1=0,ans2=0;
if(abs(y1-1)>0){
    ans1++;
}if(abs(y1-m)>0){
    ans1++;
}if(abs(x1-1)>0){
    ans1++;
}if(abs(x1-n)>0){
    ans1++;
}if(abs(y2-1)>0){
    ans2++;
}if(abs(y2-m)>0){
    ans2++;
}if(abs(x2-1)>0){
    ans2++;
}if(abs(x2-n)>0){
    ans2++;
}

cout<<min(ans1,ans2)<<endl;
}
}