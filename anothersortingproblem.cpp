#include<bits/stdc++.h>
using namespace std;

bool cmp(string a,string b){
    for(int i=0;i<a.size();i++){
if(a[i]!=b[i]){

if(i%2==0){

    return a[i]<b[i];
}else{
    return a[i]>b[i];
}
    

}

    }


    


return true;
}


signed main(){

int n,m;cin>>n>>m;

    vector<string>v;
    map<string,int>mp;
for(int i=0;i<n;i++){
    string s="";cin>>s;
    v.push_back(s);
mp[s]=i+1;
}
    

    
    sort(v.begin(),v.end(),cmp);
for(auto it:v){
    cout<<mp[it]<<" ";
}
}