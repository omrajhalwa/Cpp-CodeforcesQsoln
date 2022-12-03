#include<bits/stdc++.h>
using namespace std;
 
int main(){
int n,m,t,v,p,k=0;
cin>>n>>m;
vector<int>v1;
vector<int>v2;
 for(int i=0;i<n;i++){
    cin>>t;
    v1.emplace_back(t);
 }
 for(int i=0;i<m;i++){
    cin>>t;
    v2.push_back(t);
 }
 
sort(v1.begin(),v1.end());
sort(v2.begin(),v2.end());
 
if(v1[n-1]<v2[0]){
   int i=0;
   while(i<v2[0]-v1[n-1]){
    if(2*v1[0]<=v1[n-1]+i){
     cout<<v1[n-1]+i;
     k++;
     break;}
      i++;
   }
   }
   if(k==0){
      cout<<-1;
   }
}
 
 
 