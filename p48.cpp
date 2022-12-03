
#include<bits/stdc++.h>
using namespace std;

int main(){

int n,a,b,c,l=0,q,e,w,m=0,p=0,v=0,k=0,j;
cin>>n>>a>>b>>c;
vector<int>s;

s.emplace_back(a);
s.emplace_back(b);
s.emplace_back(c);
sort(s.begin(),s.end());

a=s[0];
b=s[1];
c=s[2];

for(int j=0;j<=n/b;j++){
for(int i=n/a;i>=0;i--){
    if(n==a*i+b*j&&p<1){
        cout<<i+j;
        v++;
        p++;
    }
}
}

if(v==0){

for(int j=0;j<=n/c;j++){
for(int i=n/a;i>=0;i--){
    if(n==a*i+c*j&&l<1){
       cout<<i+j;
        m++;
        l++;
    }
}
}





}








if(m==0&&v==0){
for(int j=0;j<=n/c;j++){
for(int i=n/b;i>=0;i--){
    if(n==b*i+c*j&&k<1){
        cout<<i+j;
        
        k++;
    }
}
}



}


}