#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){


int t;
cin>>t;
while(t--){
vector<string>v(3);
int n;
cin>>n;
cin>>v[0];
cin>>v[1];
int black=0;
for(int i=0;i<2;i++){
    for(int j=0;j<n;j++){
        if(v[i][j]=='B'){
            black++;
        }
    }
}
bool give=true,ans=true;int p=1,q=1;
if(v[0][0]=='B'){
int i=0,j=0;

map<pair<int,int>,int>mp;mp[{i,j}]=1;
while(j<n){



    if(i==0&&mp[{i+1,j}]==0&&v[i+1][j]=='B'){
        p++;
        mp[{i+1,j}]=1;
        i++;
    }else if(i==0&&j<n&&mp[{i,j+1}]==0&&v[i][j+1]=='B'){p++;
    j++;mp[{i,j}]=1;
    }else if(j==n-1){
        if(i==0&&v[i+1][j]=='B'&&!mp[{i+1,j}]){

        }else if(i==1&&v[i-1][j]=='B'&&!mp[{i-1,j}]){

        }else{
        break;
        }
    }else if(i==0){
        
     ans=false;
     break;
    }

    if(i==1&&mp[{i-1,j}]==0&&v[i-1][j]=='B'){p++;
        mp[{i-1,j}]=1;
        i--;
    }else if(j<n&&i==1&&mp[{i,j+1}]==0&&v[i][j+1]=='B'){p++;
        mp[{i,j+1}]=1;
    j++;
    }else if(j==n-1){
        if(i==0&&v[i+1][j]=='B'&&!mp[{i+1,j}]){

        }else if(i==1&&v[i-1][j]=='B'&&!mp[{i-1,j}]){

        }else{
        break;
        }
    }else if(i==1){
        
     ans=false;
     break;
    }





}
}if(v[1][0]=='B'){
int i=1,j=0;

map<pair<int,int>,int>mp;mp[{i,j}]=1;
while(j<n){



    if(i==0&&mp[{i+1,j}]==0&&v[i+1][j]=='B'){
        q++;
        mp[{i+1,j}]=1;
        i++;
    }else if(i==0&&j<n&&mp[{i,j+1}]==0&&v[i][j+1]=='B'){q++;
    j++;mp[{i,j}]=1;
    }else if(j==n-1){
        if(i==0&&v[i+1][j]=='B'&&!mp[{i+1,j}]){

        }else if(i==1&&v[i-1][j]=='B'&&!mp[{i-1,j}]){

        }else{
        break;
        }
    }else if(i==0){
        
     give=false;
     break;
    }

    if(i==1&&mp[{i-1,j}]==0&&v[i-1][j]=='B'){q++;
        mp[{i-1,j}]=1;
        i--;
    }else if(i==1&&j<n&&mp[{i,j+1}]==0&&v[i][j+1]=='B'){q++;
        mp[{i,j+1}]=1;
    j++;
    }else if(j==n-1){
        if(i==0&&v[i+1][j]=='B'&&!mp[{i+1,j}]){

        }else if(i==1&&v[i-1][j]=='B'&&!mp[{i-1,j}]){

        }else{
        break;
        }
    }else if(i==1){
        
     give=false;
     break;
    }





}
}
if(v[0][0]!='B'&&v[1][0]!='B'){
    ans=false;
    give=false;
}


if(ans&&p==black){
    cout<<"YES"<<endl;
}else if(give&&q==black){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}

}
}