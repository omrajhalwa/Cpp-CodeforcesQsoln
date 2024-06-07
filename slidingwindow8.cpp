#include<bits/stdc++.h>
using namespace std;

signed main(){
//longest substring all unique character
//pick toy

int n;cin>>n;
string s;
cin>>s;
int i=0,j=0,mx=0;
map<char,int>mp;
while(j<s.size()){


if(mp.size()<=2){
    
    mp[s[j]]++;
if(mp.size()<2){

    j++;
}
else if(mp.size()==2){
mx=max(mx,j-i+1);

    j++;

}
}
else{

mp[s[i]]--;
if(mp[s[i]]==0){
    mp.erase(s[i]);

}i++;

}



}
cout<<mx;

}