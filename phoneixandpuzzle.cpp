#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int t;
cin>>t;
while(t--){
double n;
cin>>n;

bool give=false;


for(int i=1;i<62;i++){
int k=pow(2,i);
    if(floor(sqrt(n/k))==ceil(sqrt(n/k))){
      give=true;
      break;
    }
}


if(give){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}

}

}