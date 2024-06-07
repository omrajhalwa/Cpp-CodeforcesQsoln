#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
int n;cin>>n;
vector<int>v(n);bool give=true;
for(int i=0;i<n;i++){
cin>>v[i];
if(v[i]==-1){
    give=false;
}
}

for(int i=0;i<n-1;i++){
    if(v[i]==-1&&v[i+1]==-1){
        v[i]=1;
        v[i+1]=1;give=false;
        break;
    }
}








int sum=0;for(int i=0;i<n;i++){
sum+=v[i];
}

if(give){sum=sum-4;}
cout<<sum<<endl;
}
}