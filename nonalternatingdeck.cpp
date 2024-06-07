#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int t;cin>>t;while(t--){
int n;
cin>>n;
int total=1;


int aw=0,ab=0,bw=0,bb=0;
int sum=1,i=0,p=0,k=0;
bool give=true;
while(k<n){

if(i%2==0){
    
if(k==total){
    i++;
    sum=sum+4;
    total+=sum;
}else{

if(k%2==0){
    aw++;k++;if(k>n){break;}
}else{
    ab++;k++;if(k>n){break;}
}


}


}else{
   if(k==total){
    i++;
    sum=sum+4;total+=sum;
}else{

if(k%2==0){
    bw++;k++;if(k>n){break;}
}else{
    bb++;k++;if(k>n){break;}
}


}
}

}




cout<<aw<<" "<<ab<<" "<<bw<<" "<<bb<<endl;
}
}