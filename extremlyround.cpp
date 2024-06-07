#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int p=0,r,m;
 while(n>0){
r=n%10;
n=n/10;
p++;
m=r;
 }

if(p==1){
    cout<<0+m<<endl;
}else if(p==2){
    cout<<9+m<<endl;
}else if(p==3){
    cout<<18+m<<endl;
}else if(p==4){
    cout<<27+m<<endl;
}else if(p==5){
    cout<<36+m<<endl;
}else if(p==6){
    cout<<45+m<<endl;
}else if(p==7){
    cout<<54+m<<endl;
}


}



}