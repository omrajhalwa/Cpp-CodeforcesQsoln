#include<bits/stdc++.h>
using namespace std;

int main(){
int n,k=4,l=0;
vector<int>v(4);
for(int i=0;i<4;i++){
v.push_back(1);
}
cin>>n;
n=n+1;
l=n;
while(v[0]==v[1]||v[1]==v[2]||v[3]==v[2]||v[1]==v[3]||v[3]==v[0]||v[0]==v[2]){
k=4;
while(k--){

v[k]=(n%10);
n=n/10;


}



n=l;
l++;
n++;


}

cout<<n-1;


}