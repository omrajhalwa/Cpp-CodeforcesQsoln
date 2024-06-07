#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
    //binary search............
int n;cin>>n;
vector<int>v(n);
vector<pair<int,int>>p;
for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]<i+1){
        p.push_back({v[i],i+1});
    }
}
sort(p.begin(),p.end());
int ans=0;

for(int i=0;i<p.size();i++){
int start=i+1,end=p.size()-1,an=0;
while(start<=end){
int mid=start+(end-start)/2;

if(p[mid].first>p[i].second){
    an=p.size()-mid;
    end=mid-1;
}else{
    start=mid+1;
}
}


ans+=an;

}

cout<<ans<<endl;

}
}