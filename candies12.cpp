#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
 ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
int t;
cin>>t;
while(t--){
int n;
cin>>n;


if(n%2==0){
    cout<<-1<<endl;
}else if(n==1){
    cout<<0<<endl;
}else{
   
    

vector<int>v;
v.push_back(n);
while(n>1){

if((n-1)%4!=0){
    n=(n-1)/2;
    v.push_back(n);
}else{
    n=(n+1)/2;
    v.push_back(n);
}



}
reverse(v.begin(),v.end());
vector<int>c;
for(int i=0;i<v.size()-1;i++){
    if(v[i]*2-1==v[i+1]){
        c.push_back(1);
    }else{
        c.push_back(2);
    }
}
cout<<c.size()<<endl;
for(auto it:c){
    cout<<it<<" ";
}
}
}
}