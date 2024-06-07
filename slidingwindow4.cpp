#include<bits/stdc++.h>
using namespace std;

int main(){

int n,k;cin>>n;cin>>k;
vector<int>nums(n);
for(int i=0;i<n;i++){
cin>>nums[i];
}
    vector<int>v;
list<int>q;
int i=0,j=0;
while(j<nums.size()){

while(!q.empty()&&nums[j]>q.back()){
    q.pop_back();
}
q.push_back(nums[j]);


if(j-i+1<k){
 j++;
}else if(j-i+1==k){
    v.push_back(q.front());
    if(q.front()==nums[i]){
        q.pop_front();
    }
    i++;j++;
}




}




for(auto it:v)
{cout<<it<<" ";}







}