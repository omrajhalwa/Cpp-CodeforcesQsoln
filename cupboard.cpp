#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
while(n--){
    int a,b;
    map<int,int>mp;
    map<int,int>mpp;
cin>>a>>b;
mp[a]++;
mpp[b]++;
if(mp[0]>mp[1]&&mpp[1]>mpp[0]||mp[0]<mp[1]&&mpp[1]<mpp[0]){
cout<<min(mp[0],mp[1])+min(mpp[0],mpp[1]);


}







}