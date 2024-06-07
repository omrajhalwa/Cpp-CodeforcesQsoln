#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;

    vector<string>v(n);
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v[i]=s;
    }
    
        bool give=true;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(v[i][j]=='0'){
      
     if(j<m-1&&i<n-1&&v[i][j+1]=='1'&&v[i+1][j]=='1'&&v[i+1][j+1]=='1'){
        give =false;
     }if(j+1<m&&i-1>=0&&v[i][j+1]=='1'&&v[i-1][j]=='1'&&v[i-1][j+1]=='1'){
        give=false;
     }if(i-1>=0&&j-1>=0&&v[i-1][j]=='1'&&v[i][j-1]=='1'&&v[i-1][j-1]=='1'){
        give=false;
     }if(i+1<n&&j-1>=0&&v[i+1][j]=='1'&&v[i][j-1]=='1'&&v[i+1][j-1]=='1'){
        give=false;
     }


        }
    }
}



    if(give){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}

}
}