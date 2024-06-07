#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n+1);

for(int i=1;i<=n;i++){
    cin>>v[i];
}
vector<int>out;
for(int i=1;i<=n;i++){
    int ans=1;
int start=1,end=i;
while(start<=end){

int mid=start+(end-start)/2;
if(mid<=v[i-mid+1]){
    ans=mid;
    start=mid+1;
}else{
    end=mid-1;
}

}


out.push_back(ans);

}
for(auto it:out){
    cout<<it<<" ";
}cout<<endl;//binary search
}


}