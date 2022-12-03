#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
sort(s.begin(),s.end());
map<char,int>mp;
for(int i=0;i<s.size();i++){
mp[s[i]]++;

}
for(int i=0;i<mp[s[s.size()-1]];i++){
    cout<<s[s.size()-1];
}





}