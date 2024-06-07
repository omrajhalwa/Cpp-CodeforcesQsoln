#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
string s="";
string b="";
cin>>s;
cin>>b;
int mn=0;
int n,m;
n=s.size();
m=b.size();


int i=0;
while(i<n){
int h=i;
int p=0;
int j=0;
int k=j;
while(j<m){

if(s[h]==b[k]&&h<n&&k<m){
p++;

h++;
k++;
}else if(h!=i){

if(mn<p){
    
    mn=p;
}
    h=i;
    p=0;
}else{
    j++;
    k=j;
}





}



i++;
}


cout<<n+m-2*mn<<endl;
}


}