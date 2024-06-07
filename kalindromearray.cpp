#include<bits/stdc++.h>
using namespace std;

int main(){

int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int i=0,j=n-1;bool give=true;
while(i<=j){
    if(v[i]==v[j]){
        i++;j--;
    }else{
        give=false;
        break;
    }
}

if(!give){
int a,b;
a=v[i];
b=v[j];vector<int>c;vector<int>k;
for(int i=0;i<n;i++){
if(v[i]!=a){
    c.push_back(v[i]);
}if(v[i]!=b){
    k.push_back(v[i]);
}
}
i=0,j=c.size()-1;
while(i<=j){
    if(c[i]==c[j]){
        give=true;i++;j--;
    }else{
        give=false;
        break;
    }
}
i=0,j=k.size()-1;
bool go=give;
while(i<=j&&!go){
    if(k[i]==k[j]){
        give=true;i++;j--;
    }else{
        give=false;
        break;
    }
}
}
if(give){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}
}