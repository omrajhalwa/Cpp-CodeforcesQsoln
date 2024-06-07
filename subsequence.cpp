#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<string> solve(string s){


vector<string>v;
for(int nums=0;nums<(1<<s.size());nums++){

string p="";
for(int i=0;i<s.size();i++){
 if((nums&(1<<i))){
  p.push_back(s[i]);
 }
}
v.push_back(p);



}




return v;

}





signed main(){
string s="abc";

vector<string>v=solve(s);


for(auto it:v){
    cout<<it<<endl;
}



}