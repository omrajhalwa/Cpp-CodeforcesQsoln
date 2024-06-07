#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());
vector<int>pre;
int p=0;
pre.push_back(1);
for(int i=0;i<n;i++){
p+=v[i];
pre.push_back(p);
}
bool give=true;

for(int i=0;i<n;i++){
    if(pre[i]>=v[i]){

    }else{
        give=false;
    }
}
if(give){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}

}