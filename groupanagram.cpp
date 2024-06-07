#include<bits/stdc++.h>
using namespace std;

int main(){

int n;cin>>n;
vector<string>strs;unordered_map<string,int>mp;
for(int i=0;i<n;i++){
    string kl="";

  cin>>kl;
    mp[kl]++;
}
for(auto it:mp){
   cout<<it.first<<" "<<it.second<<endl;
}


}