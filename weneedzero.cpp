#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n);
for(int &x:v){cin>>x;}
int a=v[0];
if(n>1){
    for(int i=1;i<n;i++){
        a=a^v[i];
    }
}
if(n%2==0&&a==0){
    cout<<0<<endl;
}else if(n%2!=0){

    cout<<a<<endl;
}else{
    cout<<-1<<endl;
}

}
}