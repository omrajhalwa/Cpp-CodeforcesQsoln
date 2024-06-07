#include<bits/stdc++.h>
using namespace std;
#define int long long

bool cmp(int a,int b){

    if(a%2==0&&b%2!=0){
      return false;
    }if(a%2==0&&b%2==0){
        return a<b;
    }if(a%2!=0&&b%2!=0){
        return a<b;
    }



    return true;
}



signed main(){
        ios::sync_with_stdio(false);
cin.tie(0);
int t;cin>>t;
while(t--){

int n;cin>>n;
if(n%2==0){
    cout<<"NO"<<endl;
}else{
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        v[i].first=2*n-i;
    
    }
    vector<int>v1;
    for(int i=1;i<=n;i++){v1.push_back(i);}
    sort(v1.begin(),v1.end(),cmp);
    for(int i=0;i<n;i++){
        v[i].second=v1[i];
    }

cout<<"YES"<<endl;
for(auto it:v){
    cout<<it.first<<" "<<it.second<<endl;
}

}
}





}