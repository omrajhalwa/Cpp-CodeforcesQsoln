
#include<bits/stdc++.h>
using namespace std;


signed main(){

int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
vector<int>hash(31,0);

for(int i=0;i<n;i++){
    int a=v[i];
    for(int j=0;j<=30;j++){
        if(((a>>j)&1)==1){
            hash[j]++;
        }
    }
}
int ans=0;int k;
if(n%2==0){
    k=n/2;
}else{
    k=n/2+1;
}

for(int i=0;i<=30;i++){
    
    if(n%2==0&&hash[i]>n/2){
        ans=(ans|(1<<i));
    }if(n%2==1&&hash[i]>=n/2+1){
        ans=(ans|(1<<i));
    }
}

cout<<ans<<endl;
}