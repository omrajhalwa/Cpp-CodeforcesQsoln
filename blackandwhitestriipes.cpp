#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
string s="";
cin>>s;
vector<int>v;
int sum=0;v.push_back(0);
for(int i=0;i<s.size();i++){
    if(s[i]=='B'){
sum++;}
v.push_back(sum);

}
int mn=k;
for(int i=0+k;i<v.size();i++){
    mn=min(mn,k-(v[i]-v[i-k]));
}

cout<<mn<<endl;

}

}