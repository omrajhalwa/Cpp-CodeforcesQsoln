#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
map<int,int>mp;
vector<int>v;
for(int i=1;i<=n;i++){
    int x;
    cin>>x;
    v.push_back(x);
mp[x]=i;

}

sort(v.begin(),v.end());

cout<<mp[v[v.size()-1]]<<endl;





}






}