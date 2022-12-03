#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a[101][101];
    string s;
cin>>n>>m;
map<int,string>mpp;
for(int i=0;i<n;i++){
    cin>>s;
    mpp[i]=s;
}

for(int i=0;i<n;i++){
   
    for(int j=0;j<m;j++){
    if(mpp[i][j]=='.'&&(i+j)%2==0){
        cout<<"B";
    
    }
    else if(mpp[i][j]=='.'&&(i+j)%2!=0){
        cout<<"W";
        
    }else{
        cout<<mpp[i][j];
    }
    }
    
    cout<<endl;
    
}

}