#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
string s="";
cin>>s;
int n=s.size();

string s1="";
for(int i=0;i<n;i++){
    s1.push_back('(');
    s1.push_back(')');
}
string s2="";
for(int i=1;i<=2*n;i++){
    if(i<=n){
         s2.push_back('(');
    }else{
         s2.push_back(')');
    }
}

size_t found = s1.find(s);size_t found1 = s2.find(s);
  if (found == string::npos){
    cout<<"YES"<<endl;
cout<<s1<<endl;
  }else if(found1 == string::npos){
    cout<<"YES"<<endl;
cout<<s2<<endl;
  }else{
    cout<<"NO"<<endl;
  }

}
}