#include<bits/stdc++.h>
using namespace std;

signed main(){
//longest substring all unique character

int n;cin>>n;
string s;
cin>>s;
int i=0,j=0;
map<char,int>mp;
int mx=0;
int k=-1;
while(j<s.size()){

if(j!=k){
mp[s[j]]++;
k=j;
}
if(j-i+1==mp.size()){

    //cout<<j-i+1;
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