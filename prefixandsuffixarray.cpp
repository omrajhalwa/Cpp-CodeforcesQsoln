#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
map<char,int>mp;
vector<string>c;
for(int i=0;i<2*n-2;i++){
    string s="";
cin>>s;
mp[s[0]]++;
if(s.size()==n-1){
    c.push_back(s);
}
}
string s="";
s+=c[0];
reverse(s.begin(),s.end());




if(s==c[1]){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}


}