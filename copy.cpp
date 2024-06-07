#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

string s;
int n;
cin>>s;
cin>>n;

map<char,int>mp;
for(int i=0;i<s.size();i++){
    mp[s[i]]++;
}
int sum=0;
for(auto it:mp){
    sum+=(it.second%n);
}

cout<<sum<<endl;

}