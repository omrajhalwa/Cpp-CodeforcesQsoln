#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;
cin>>t;
while(t--){
int n,x;
cin>>n>>x;
vector<int>v(n);
vector<int>pre;
int p=0;
for(int i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());
pre.push_back(0);
for(int i=0;i<n;i++){
     p+=v[i];
    pre.push_back(p);


}
auto istrue=[&](int r){
    int start=0,end=x;
    int cnt=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
if(pre[r]+r*mid<=x){
    cnt=mid;
    start=mid+1;

}else{
    end=mid-1;
}
    }

    return cnt+1;
};
vector<int>ans;
for(int i=1;i<=n;i++){
    ans.push_back(istrue(i));
}


int mn=0,resu=0;
for(int i=ans.size()-1;i>=0;i--){
   
   resu+=(ans[i]-mn)*(i+1); 
   mn=ans[i];
}
cout<<resu<<endl;

}
}
