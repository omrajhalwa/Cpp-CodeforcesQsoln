#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){

int n;cin>>n;
string s="";cin>>s;
vector<int>v(n+1,0);
int p=1;
for(int i=0;i<n;i++){

if(i<n-1&&s[i]!=s[i+1]){
v[i]=v[i+1]=p;
p++;
}

}



}