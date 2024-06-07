#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mk make_pair
signed main(){
    int t;cin>>t;
    while(t--){

int n;cin>>n;vector<int>v(n);
vector<pair<int,int>>p;
for(int i=0;i<n;i++){
    cin>>v[i];

}
for(int i=0;i<n;i++){
    if(n%2!=0&&i==0){
        p.push_back(mk(0,v[i]));
    }else{
      p.push_back(mk(v[i],v[i+1]));
     i++;
    }
}


bool give=true;
for(int i=0;i<p.size()-1;i++){
if(p[i].first>p[i+1].second||p[i].first>p[i+1].first||p[i].second>p[i+1].second||p[i].second>p[i+1].first)
{
    give=false;
}
}



if(give){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
    }
}