#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

ios::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--){
vector<pair<int,int>>p;
int n;
cin>>n;
vector<int>v(n);
for(int &x:v){
    cin>>x;
}

if(n%2!=0){
    cout<<-1<<endl;
}else{

int mio=0,po=0;
for(auto it:v){
    if(it==1){
        po++;
    }else{
        mio++;
    }
}

if(mio==0||po==0){
    cout<<1<<endl;
    cout<<1<<" "<<n<<endl;
}else{
int a,b;

 a=min(mio,po),b=min(mio,po);

for(int i=0;i<n;i++){
    if(a>0&&v[i]==-1){    
    p.push_back({i+1,i+1});a--;
    }else if(b>0&&v[i]==1){
    p.push_back({i+1,i+1});b--;
    }

}




for(int i=1;i<p.size();i++){
if(p[i-1].second+1!=p[i].first){
    p[i].first=p[i-1].second+1;
}
}
if(p[p.size()-1].second!=n){
    p[p.size()-1].second=n;
}
cout<<p.size()<<endl;
for(auto  it:p){
    cout<<it.first<<" "<<it.second<<endl;
}
}
}
}


}