#include<bits/stdc++.h>

using namespace std;

//longest substring k unique charachters....



signed main(){

int k;
cin>>k;
string s;
cin>>s;

int i=0,j=0,mx=0;
map<char,int>mp;
while(j<s.size()){

mp[s[j]]++;

if(mp.size()<k){
    j++;
}else if(mp.size()==k){
    cout<<j-i+1<<endl;
mx=max(mx,j-i+1);

j++;


}else{

    mp[s[i]]--;
    if(mp[s[i]]==0){
        mp.erase(s[i]);
    }
    i++;
    
}





}

cout<<mx<<endl;


}