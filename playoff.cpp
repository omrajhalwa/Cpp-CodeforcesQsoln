#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

int n;
cin>>n;
string s="";
cin>>s;

int total=(1<<n);

int i=0,j=total-1;
int j1=0,j2=0;
for(int k=0;k<n;k++){
    if(s[k]=='0'){
      j-=(1<<j1);
      j1++;
    }else{
      i+=(1<<j2);
      j2++;
    }
}


for(int it=i;it<=j;it++){
    cout<<it+1<<" ";
}


}