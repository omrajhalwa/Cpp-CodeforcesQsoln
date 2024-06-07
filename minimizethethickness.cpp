#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n);int sum=0;
for(int i=0;i<n;i++){
    cin>>v[i];
    sum+=v[i];
}

vector<int>c;
for(int i=1;i<=n;i++){
    if(sum%i==0){
        c.push_back(i);
    }
}
int mn=n;
for(int i=0;i<c.size();i++){
int rum=0,len=0,p=0,eq=0;
for(int j=0;j<v.size();j++){
rum+=v[j];
    if(rum==sum/c[i]){
        len=max(len,j-p+1);
        p=j+1;rum=0;eq++;
    }if(rum>sum/c[i]){
        j=v.size();len=n;
    }
}

if(len<mn&&eq==c[i]){
    mn=len;
}

}



cout<<mn<<endl;}
}