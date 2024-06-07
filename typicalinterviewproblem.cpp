#include<bits/stdc++.h>
using namespace std;

signed main(){
     ios::sync_with_stdio(false); cin.tie(0);
int t;cin>>t;
while(t--){
    int n;cin>>n;
    
   string s="";
   vector<int>c;
   for(int i=0;i<=1000;i++){
     if(i%3==0){
      s.push_back('F');
     }if(i%5==0){
      s.push_back('B');
     }
   }
//cout<<s<<endl;
string str1="";
cin>>str1;
  size_t found = s.find(str1);
    if (found != string::npos){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
}
}