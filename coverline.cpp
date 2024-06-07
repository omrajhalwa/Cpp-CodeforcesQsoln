#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,pair<int,int>>a,pair<int,pair<int,int>>b){
    
    if(a.first>b.first){
        return false;
    }else if(a.first==b.first){
        if(a.second.first>b.second.first){
            return false;
        }
    }
    return true;
}





signed main(){
int n;cin>>n;
int m;cin>>m;
vector<pair<int,int>>v;
vector<pair<int,pair<int,int>>>c;int ans=0;
for(int i=0;i<m;i++){
int a,b,r;cin>>a>>b>>r;
ans=max(ans,r);
v.push_back(make_pair(a,b));
c.push_back(make_pair(r,make_pair(a,b)));
}
sort(v.begin(),v.end());
int p=1;
for(int i=0;i<m;i++){
if(v[i].first<=p+1){
p=max(p,v[i].second);

}
}
if(p==n){
    auto istrue=[&](int x){

vector<pair<int,int>>p;
for(int i=0;i<m;i++){
    if(c[i].first<=x){
        p.push_back(make_pair(c[i].second.first,c[i].second.second));
    }
}
sort(begin(p),end(p));

if(p.empty()||p[0].first!=1){
    return false;
}else{
 int p1=1;
for(int i=0;i<=p.size();i++){
if(p[i].first<=p1+1){
p1=max(p1,p[i].second);

}
}
return p1==n;
}
};


int start=1,end=ans;
while(start<=end){
int mid=start+(end-start)/2;

if(istrue(mid)){
     ans=mid;
end=mid-1;
}else{
    start=mid+1;
}


}

cout<<ans<<endl;

}else{
    cout<<"-1"<<endl;
}

}