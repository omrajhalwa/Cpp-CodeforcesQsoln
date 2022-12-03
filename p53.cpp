#include<bits/stdc++.h>
using namespace std;

int main(){
 long long  int k,g,m=1,n=-1,l=-1;
cin>>k>>g;
while(g>m){
    if(g!=m){
m=m*k;
n++;
l++;}
}

if(g%k==0&&m==g){
    cout<<"YES"<<endl;
    cout<<l;
}else{
    cout<<"NO";
}

}