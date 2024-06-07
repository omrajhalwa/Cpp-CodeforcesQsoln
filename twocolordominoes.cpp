#include<bits/stdc++.h>
using namespace std;
#define int long long



signed main(){
  int t;
  cin>>t;
  while(t--){
int n,m;
cin>>n>>m;
vector<string>v;
for(int i=0;i<n;i++){
    string k="";
    cin>>k;
    v.push_back(k);
}
map<pair<char,pair<int,int>>,int>mp;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(v[i][j]=='L'){
            mp[{'r',{j,j+1}}]++;
        }if(v[i][j]=='U'){
            mp[{'c',{i,i+1}}]++;
        }
    }
}

vector<vector<char>>check;
 
for(int i=0;i<n;i++){
   vector<char>ch;
    for(int j=0;j<m;j++){
       ch.push_back('.');
    }
    check.push_back(ch);
    
}



bool give=true;
for(auto it:mp){
    if(it.second%2!=0){give=false;}
}

if(!give){
    cout<<-1<<endl;
}else{
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(v[i][j]=='L'){
            if(mp[{'r',{j,j+1}}]%2==0){
              check[i][j]='B';
              check[i][j+1]='W';
            }else{
                check[i][j]='W';
              check[i][j+1]='B';
            }
            mp[{'r',{j,j+1}}]--;
        }if(v[i][j]=='U'){
           if(mp[{'c',{i,i+1}}]%2==0){
              check[i][j]='B';
              check[i+1][j]='W';
            }else{
                check[i][j]='W';
              check[i+1][j]='B';
            }

            mp[{'c',{i,i+1}}]--;
        }
    }
}

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<check[i][j];
    }cout<<endl;
}



}



}
}