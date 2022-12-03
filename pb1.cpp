#include<bits/stdc++.h>
using namespace std;

int main(){
int n,p;
cin>>n>>p;
string s,k;
cin>>s;
k=s;
while(p--){
int j=0;
while(j<k.size()){
   
        if(k[j]=='B'&&k[j+1]=='G'){
            k[j]='G';
            k[j+1]='B';
            j=j+2;
        }else{
            j++;
        }
}
    
}
cout<<k;

}