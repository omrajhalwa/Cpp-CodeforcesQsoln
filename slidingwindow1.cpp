#include<bits/stdc++.h>
using namespace std;


//maximum sum of subarray of size k
int main(){

int n,k;cin>>n;cin>>k;
vector<int>nums(n);
for(int i=0;i<n;i++){
cin>>nums[i];
}
        vector<int>v;
int sum=nums[0];int ans=-1000000;
int i=0,j=0,p=0,l=0;
while(j<nums.size()){

if(j-i+1<k){
    
}else if(j-i+1==k){
    if(ans<sum){
        ans=sum;
        p=i;
        l=j;
    }
    sum-=nums[i];
    i++;
}
j++;
sum+=nums[j];


}

for(int i=0;i<nums.size();i++){
if(i>=p&&i<=l){
    v.push_back(nums[i]);
}
}


for(auto it:v)
{cout<<it<<" ";}







}