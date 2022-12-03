#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){

string s;
string b;
cin>>s;
cin>>b;
map<char,int>mp;
for(int i=0;i<2;i++){
    mp[s[i]]++;
    mp[b[i]]++;
}
vector<int>v;


for(auto it=mp.begin();it!=mp.end();it++){
v.push_back(it->second);
     
}
sort(v.begin(),v.end());
if(v[v.size()-1]==4){
    cout<<0<<endl;
}else if(v[v.size()-1]==2&&v[v.size()-2]==2||v[v.size()-1]==3){
    cout<<1<<endl;
}else if(v[v.size()-1]==2&&v[v.size()-2]==1){
cout<<2<<endl;}
else if(v[v.size()-1]==1&&v[v.size()-2]==1)
{
    cout<<3<<endl;
}
}

}