#include<bits/stdc++.h>
using namespace std;
#define int long long



signed main(){
    
int t;cin>>t;
while(t--){
    int n,k;cin>>n>>k;
    vector<int>nums(n); vector<int>v(n);int mex=0;
    for(int i=0;i<n;i++){cin>>nums[i];v[i]=nums[i];

    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(mex==v[i]){
            mex=v[i]+1;
        }
    }
    
    nums.push_back(mex);
    n++;
    k=k%n;
     reverse(nums.begin(),nums.end());
     reverse(nums.begin(),nums.begin()+k);
     reverse(nums.begin()+k,nums.end());

for(int i=0;i<n-1;i++){
    cout<<nums[i]<<" ";
}cout<<endl;
}

}
