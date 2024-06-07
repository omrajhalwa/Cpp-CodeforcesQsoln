#include<bits/stdc++.h>
using namespace std;


int main(){
int t;
cin>>t;
while(t--){

int n,m;
cin>>n>>m;

int mn,mx;
mn=min(n,m);
for(int i=0;i<mn;i++){
    cout<<"01";
}

n=n-mn;
m=m-mn;
if(n>0){
    for(;n--;){
        cout<<'0';
    }
}else if(m>0){
    for(;m--;){
        cout<<'1';
    }
}

cout<<endl;
}


}