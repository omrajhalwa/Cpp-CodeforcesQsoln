#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
 int n;cin>>n;
 vector<int>nums(n);
 for(int &x:nums){cin>>x;}
         //nlogn
    vector<int>dp;

    for(int i=0;i<n;i++){


        auto it=lower_bound(dp.begin(),dp.end(),nums[i]);
        if(it==dp.end()){
            dp.push_back(nums[i]);
        }else{
            *it=nums[i];
        }
    }

   

cout<<dp.size()<<endl;



}