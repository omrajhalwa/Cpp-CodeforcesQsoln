#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);

int t;cin>>t;
while(t--){
string s="";
cin>>s;
int n=s.size();
bool give=true;

stack<int>st;
map<int,int>mp;
vector<int>v;
int zero=0;
for(int i=n-1;i>=0;i--){
if(s[i]=='+'){
      if(zero==1){ v.push_back(-1);zero=0;}
      else v.push_back(1);
    }else if(s[i]=='0'){
      zero=1;
    }else if(s[i]=='1'){
        zero=0;
    }
  
}
int j=v.size()-1;int cnt=0;
for(int i=0;i<n;i++){
    if(s[i]=='+'){
        if(v[j]==-1) cnt++;
       st.push(v[j--]);
    }else if(s[i]=='-'){
        if(st.top()==-1)cnt--;
       st.pop();
    }else if(s[i]=='1'){
         if(cnt>0){
            give=false;
            break;
         }
    }else{
        
         if(cnt==0||st.size()<2){
            give=false;
         }
    }
}




if(give){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}
}