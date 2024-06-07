#include<bits/stdc++.h>
using namespace std;
#define int long long




signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
int m=n;
int flag=0;
if(n%2!=0){
    n--;flag=1;
}

int cnt=0,var=0;
for(int i=1;i<=30;i++){
if((1<<i)<n){
    cnt=(1<<i);
   // cout<<cnt<<" ";
}
}

var=cnt;
int var2=var;
int pos=0;




vector<int>ans;
ans.push_back(1);
ans.push_back(2);
int sum=2;



for(int i=1;(1<<i)<var2;i++){

    sum+=(1<<i);
    ans.push_back(sum);
}


while(var2<n){

int dif=n-var2;
int c1=0;
for(int i=1;i<=30;i++){
    if(dif>=(1<<i)){
      c1=(1<<i);
    }
}


if(var2+c1!=2)ans.push_back(var2+c1);
var2+=c1;

}





if(flag==1){
    ans.push_back(n+1);
}
reverse(ans.begin(),ans.end());
cout<<ans.size()<<endl;
for(auto it:ans){cout<<it<<" ";}
cout<<endl;
}
}