#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){

int n;
cin>>n;
string s="";
cin>>s;
int mx=1;
for(int i=0;i<n;i++){
int k=0;
k=int(s[i])-96;
mx=max(mx,k);

}

cout<<mx<<endl;




}





}