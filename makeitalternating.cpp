#include<bits/stdc++.h>
using namespace std;
#define int long long
int mod=998244353;


vector <int> fact (200005);
 
void factori () {
    fact[0] = 1;
    for (int i = 1; i < 200005; i++) {
        fact[i] = (fact[i - 1] * i);
    }
}
int ncr(int n,int r){
    if(r==0) return 1;
    if(r==1) return n;

    return fact[n]/(fact[n-r]*fact[r]); 
}
signed main(){
    factori();
int t;
cin>>t;
while(t--){

string s="";
cin>>s;
int n=s.size();int ans=0;
int sec=0;int p=1,com=0;
for(int i=0;i<n-1;i++){
if(s[i]==s[i+1]){

    ans++;
}
}
int com2=0;int ans2=0,ct=0;
for(int i=0;i<n-1;i++){
    if(s[i]==s[i+1]){
        ++p;
        
    }else{
      if(p>1) {ct++;
        ans2+=ncr(p,p-1)*fact[p-1];
      }
        p=1;
    }
}

if(p>1){ct++;
   ans2+=ncr(p,p-1)*fact[p-1];
    p=1;
}


 cout<<ans<<" "<<endl;
}
}