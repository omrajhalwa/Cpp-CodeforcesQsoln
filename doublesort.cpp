#include<bits/stdc++.h>
using namespace std;
#define int long long 

bool cmp(pair<int,int>a,pair<int,int>b){

if(a.first>b.first){
    return false;
}else if(a.first==b.first){
    if(a.second>b.second){
        return false;
    }else{
        return true;
    }
}else{
    return true;
}


}



signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>a(n),b(n);
vector<pair<int,int>>v;
vector<pair<int,int>>c;

for(int i=0;i<n;i++){
    cin>>a[i];
}for(int i=0;i<n;i++){
    cin>>b[i];
}
for(int i=0;i<n;i++){
  c.push_back(make_pair(a[i],b[i]));
}
sort(begin(a),end(a)),sort(begin(b),end(b));
for(int i=0;i<n;i++){
  v.push_back(make_pair(a[i],b[i]));
}

bool give=true;


vector<pair<int,int>>p;
for(int i=0;i<n;i++){

if(v[i].first!=c[i].first){
    
    for(int j=i+1;j<n;j++){
        if(v[i].first==c[j].first){
            p.push_back(make_pair(i+1,j+1));
            swap(c[i].first,c[j].first);
             swap(c[i].second,c[j].second);
            break;
        }
    }
}
}for(int i=0;i<n;i++){

if(v[i].second!=c[i].second){
    
    for(int j=i+1;j<n;j++){
        if(v[i].second==c[j].second){
            p.push_back(make_pair(i+1,j+1));
            swap(c[i].second,c[j].second);
             swap(c[i].first,c[j].first);
            break;
        }
    }
}
}

for(int i=0;i<n;i++){
    if(c[i].second!=v[i].second||c[i].first!=v[i].first){

    
        give=false;break;
    }
}




if(!give){
    cout<<-1<<endl;
}else{
cout<<p.size()<<endl;

for(auto it:p){
   cout<<it.first<<" "<<it.second<<endl;
}

}
}
}