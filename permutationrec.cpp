#include<bits/stdc++.h>
using namespace std;
#define int long long
void permutations(vector<int> &nums, int i, vector<vector<int>> &res) {
        if(i == nums.size()-1) {
            res.push_back(nums);
            return;
        }
        for(int k=i; k<nums.size(); k++) {
            swap(nums[k],nums[i]);
            permutations(nums,i+1,res);
            swap(nums[k],nums[i]);
        }
    }


signed main(){
vector<int>v;
for(int i=1;i<=3;i++){
    v.push_back(i);

}
vector<vector<int>>ans;

permutations(v,0,ans);
for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }cout<<endl;
}


}