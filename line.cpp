#include<bits/stdc++.h>
using namespace std;
#define int long long
//hmm
signed main(){

int t;
cin>>t;
while(t--){
int n;
cin>>n;
string s="";
cin>>s;
string org="";
for(int i=1;i<=n;i++){
    if(i<=n/2)
    org.push_back('R');
    else{org.push_back('L');}
}

vector<int>ans;int sum=0;
for(int i=0;i<n;i++){
    if(s[i]=='L'){
        sum+=i;
        
    }else{
        sum+=n-1-i;
    
    }
}
for(int i=0;i<n;i++){
    int rum=0;
    if(s[i]!=org[i]){
   s[i]=org[i];
    if(org[i]=='L'){
        rum+=i;
        rum-=n-1-i;
    }else{
        rum+=n-1-i;rum-=i;
    }
  ans.push_back(rum);
    }
}
sort(ans.begin(),ans.end());
reverse(ans.begin(),ans.end());

for(int i=0;i<n;i++){
    
    if(i<ans.size()){
        sum+=ans[i];
    }
    cout<<sum<<" ";
}cout<<endl;
}
}