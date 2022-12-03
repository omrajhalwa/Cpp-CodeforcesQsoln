#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
long long int t;
cin>>t;
for(int i=0;i<t;i++){


long long int n,a,b,k,c,d,p,l;
cin>>n;
n=n-3;
a=n/3;

b=(n*2)/3;
if(1+a+b>n){
    b=n-a-1;
}
c=n-b-a;
k=min(min(abs(a-c),abs(b-c)),abs(b-a));

if(n>3){
    cout<<k<<endl;
}
else{
    cout<<0<<endl;
}


}

}