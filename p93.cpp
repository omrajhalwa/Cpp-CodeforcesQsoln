#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
int n,a,b;
cin>>n;
for(int i=0;i<3;i++){
    cin>>a>>b;
    if(n==a){
        n=b;
    }else if(n==b){
        n=a;
    }
   
}


cout<<n;





}