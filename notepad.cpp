#include<bits/stdc++.h>
using namespace std;

int main(){
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){

   
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int r;
 
int ans=0;
for(int i=1;i<=n;i++){
    vector<int>v;
   int ni=i;
   
while(ni>0){
 
r=ni%10;
ni=ni/10;
v.push_back(r);
 
}
int p=0;
for(auto it: v){
    if(it>0){
        p++;
    }
}if(p==1){
    ans++;
}
 
}
 
cout<<ans<<endl;}
}
    int t;
    cin>>t;
    while(t--){
int n;
cin>>n;
string s;
cin>>s;
map<pair<char,char>,int>mp;
for(int i=0;i<n-1;i++){

if(i<n-2&&s[i]==s[i+1]&&s[i]==s[i+2]){

mp[make_pair(s[i],s[i+1])]++;
i++;
}else{
mp[make_pair(s[i],s[i+1])]++;}

}
bool boo=false;
for(auto it:mp){
if(it.second>1){
    boo=true;
    break;
}

}
if(boo){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}

    }

}