#include<bits/stdc++.h>
using namespace std;
#define int long long

/*

jai jai bajrangbali............

 */
void solve(){


int n,k;cin>>n>>k;

vector<string>v;
for(int i=0;i<n;i++){
    string s="";
    cin>>s;
    v.push_back(s);
}
vector<string>s;
for(int i=0;i<n;i++){
    string r="";
    for(int j=0;j<k;j++){
     r.push_back('0');
    }
    s.push_back(r);
}

vector<pair<pair<int,int>,pair<int,int>>>p;
for(int i=n-1;i>=0;i--){
    for(int j=k-1;j>=0;j--){
      if(v[i][j]=='1'&&j>0){
        s[i][j]='1';
        p.push_back({{i+1,j},{i+1,j+1}});
      }
    }
}

for(int i=n-1;i>0;i--){
     if(v[i][0]=='1'){
        s[i][0]='1';
        
         p.push_back({{i,1},{i+1,1}});
      }
}






if(v[0][0]=='1'){
    cout<<-1<<endl;
}else{
    cout<<p.size()<<endl;
for(auto it:p){
    cout<<it.first.first<<" "<<it.first.second<<" "<<it.second.first<<" "<<it.second.second<<endl;
}
}

}

signed main(){

int t;cin>>t;
while(t--){
    solve();
}

    //solve();
}