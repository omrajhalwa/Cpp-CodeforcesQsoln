#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
  
string s;
cin>>s;



int h=s.size()-1;
char j=s[h];
for(int i=h-1;i>=0;i--){
  if(s[i]>j){
if(s[i]!='9'){
    s[i]=s[i]+1;
}
  }
   else{
    j=s[i];
   }
    
}
sort(s.begin(),s.end());
cout<<s<<endl;
    }


}