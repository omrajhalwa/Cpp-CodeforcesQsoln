#include<bits/stdc++.h>
using namespace std;
#define int long long

int strongsubarray(int n,vector<int>&a){

vector<int>prefixsum(n),prefixxor(n);
int ans=0;

for(int i=0;i<n;i++){
    prefixsum[i]=a[i];
    prefixxor[i]=a[i];
    if(i>0){
        prefixsum[i]+=prefixsum[i-1];
        prefixxor[i]^=prefixxor[i-1];

    }
}

for(int i=0;i<n;i++){
    int left=i,right=n-1,j=i;

while(left<=right){
    int mid=left+(right-left)/2;
    int subarrayxor;
    int subarraysum;

subarrayxor=prefixxor[mid]^(i==0?0:prefixxor[i-1]);
subarraysum=prefixsum[mid]-(i==0?0:prefixsum[i-1]);

if(subarrayxor==subarraysum){
    j=mid;
    left=mid+1;
}else{
    right=mid-1;
}



}

ans+=j-i+1;
}
return ans;
}





signed main(){

int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}

cout<<strongsubarray(n,v);


}





}