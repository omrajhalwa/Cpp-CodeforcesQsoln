#include<bits/stdc++.h>
using namespace std;


int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){

int a,b,c,p=0;
cin>>a>>b>>c;
if(a==b+c){
    p++;
}
else if(b==a+c){
    p++;
}
else if(c==a+b){
    p++;
}

if(p>0){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}



}









}