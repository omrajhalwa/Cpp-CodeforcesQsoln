#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

int n,d;
cin>>n>>d;
vector<int>v(n);
for(int i=0;i<n;i++){
cin>>v[i];
}

sort(v.begin(),v.end());
int i=n,j=1,k=1,p=0;
while(i>0&&k<=i){

if(v[n-j]*k>d){

p++;
j++;
i=i-k;
k=1;
}else{
    k++;
}



}

cout<<p<<endl;

}