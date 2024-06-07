#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n,k;cin>>n>>k;
string s="";
cin>>s;

if((k-1)%2!=0){
    sort(s.begin(),s.end());
    cout<<s<<endl;
}else{
    string k="";
    string r="";
    for(int i=0;i<n;i++){
        if(i%2==0){
       k.push_back(s[i]);
        }else{
            r.push_back(s[i]);
        }
    }
string ans="";
     sort(k.begin(),k.end());
      sort(r.begin(),r.end());
      for(int i=0,j=0,p=0;p<n;p++){
        if(p%2==0){
       ans.push_back(k[i++]);
        }else{
            ans.push_back(r[j++]);
        }
    }

    cout<<ans<<endl;
}


}

}