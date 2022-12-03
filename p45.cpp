#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
int n,ans=0;
pair<int,int>p[201];
cin>>n;
for(int i=0;i<n;i++){
    cin>>p[i].first>>p[i].second;
}
for(int j=0;j<n;j++)
{ int pns=0;
int g=0,q=0,r=0,s=0;
       for(int i=0;i<n;i++){

if(p[i].first>p[j].first&&p[i].second==p[j].second&&g==0){
    pns++;
    g++;
   // cout<<pns<<" ";
}
if(p[i].first<p[j].first&&p[i].second==p[j].second&&q==0){
    pns++;
    q++;
   // cout<<pns<<" ";
}if(p[i].first==p[j].first&&p[i].second>p[j].second&&r==0){
    pns++;
    r++;
   // cout<<pns<<" ";
}if(p[i].first==p[j].first&&p[i].second<p[j].second&&s==0){
    pns++;
    s++;
    //cout<<pns<<" ";
}




}
if(pns==4){
    ans++;
}
}

cout<<ans;
}