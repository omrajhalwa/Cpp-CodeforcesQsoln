#include<bits/stdc++.h>
using namespace std;

//count of occurence of anagram
int main(){

int n;
cin>>n;
map<string,int>mp;
for(int i=0;i<n;i++){
    string s="";
    cin>>s;
 sort(s.begin(),s.end());
    mp[s]++;
}

cout<<mp.size()<<endl;





}