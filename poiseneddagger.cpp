#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n,h;cin>>n>>h;

vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
vector<int>c;
for(int i=0;i<n-1;i++){
    c.push_back(v[i+1]-v[i]);
}
sort(c.begin(),c.end());

auto istrue=[&](){
int ans=0,mn=INT64_MAX;
for(int i=0;i<c.size();i++){
int start=1,end=c[i];


while(start<=end){
int mid=start+(end-start)/2;
if(mid*(n-i)>=h){
end=mid-1;
ans=mid;
}else{
    start=mid+1;
}

}

if(ans!=0){
    return ans;
}else{

    h-=c[i];
}

}

return h;
};

cout<<istrue()<<endl;

}
}