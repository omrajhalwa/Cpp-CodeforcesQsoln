#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

int t;
cin>>t;while(t--){
int n;cin>>n;
vector<pair<int,int>>odd;
vector<pair<int,int>>even;
for(int i=0;i<n;i++){
int k;cin>>k;

if(k%2==0){even.push_back(make_pair(k,i+1));}
else{odd.push_back(make_pair(k,i+1));}
}



if(odd.size()>0&&odd.size()<3&&even.size()>1){
cout<<"YES"<<endl;
    cout<<odd[0].second<<" "<<even[0].second<<" "<<even[1].second<<endl;
}else if(odd.size()>2){
    cout<<"YES"<<endl;
    cout<<odd[0].second<<" "<<odd[1].second<<" "<<odd[2].second<<endl;
}else{
    cout<<"NO"<<endl;
}


}
}