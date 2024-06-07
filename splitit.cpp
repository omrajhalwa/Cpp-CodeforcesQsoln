#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n,k,r;
cin>>n>>k;
vector<char>v(n+1);
vector<char>b;
string s;
cin>>s;
bool give=true;
r=k;
for(int i=1;i<=n;i++){
    v[i]=s[i-1];
}
if(n%2==0){
for(int i=1;i<n/2;i++){
    if(v[i]==v[n-i+1]){
     r--;
    }else if(r>0){
        give=false;
        break;
    }
}}
else{
    for(int i=1;i<n/2+1;i++){
    if(v[i]==v[n-i+1]){
       r--;
    }else if(r>0){
        give=false;
        break;
    }
    }
}
if(r>0){
    give=false;
}

if(give){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}


}




}