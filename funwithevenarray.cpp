#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){

int t;
cin>>t;
while(t--){

int n;
cin>>n;
vector<int>v(n+1);
for(int i=1;i<=n;i++){
    cin>>v[i];
}
reverse(v.begin()+1,v.end());



int k=v[1],p=0,ans=0;
int i=1;


while(i<n){

if(v[i+1]==v[1]){
    i++;
}else{
    ans++;
i=i*2;
}




}


cout<<ans<<endl;

}
}