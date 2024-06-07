#include<bits/stdc++.h>
using namespace std;

int main(){
int t;cin>>t;while(t--){
string s="314159265358979323846264338327";
string k="";
cin>>k;int sum=0;
for(int i=0;i<k.size();i++){
    if(s[i]==k[i]){
        sum++;
    }else break;
}

cout<<sum<<endl;

}

}