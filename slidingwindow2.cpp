#include<bits/stdc++.h>
using namespace std;


//first negative integer in eveeery window of size k

int main(){

int n,k;cin>>n;cin>>k;
vector<int>nums(n);
for(int i=0;i<n;i++){
cin>>nums[i];
}
        vector<int>v;

int i=0,j=0;queue<int>q;

while(j<nums.size()){

if(nums[j]<0){
q.push(nums[j]);}
if(j-i+1<k){
    j++;
}else if(j-i+1==k){

    if(!q.empty()){
   v.push_back(q.front());
 }else{
    v.push_back(0);
 }

 if(q.front()==nums[i]){
    q.pop();
 }
    i++;j++;
}




}




for(auto it:v)
{cout<<it<<" ";}







}