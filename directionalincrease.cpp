#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>v(n);
for(int &x:v){cin>>x;}

int a=0;
if(v[0]!=0&&v.size()==1){
    cout<<"NO"<<endl;
}else if(v[0]==0&&v.size()==1){
    cout<<"YES"<<endl;
}else{
    bool give=false;
    
   int i=0;
   while(i<v.size()){
   
   if(give){
     if(v[i]!=0){give=false;break;}
     i++;
   }else if(i<v.size()-1&&v[i]+v[i+1]==0){
    give=true;i+=2;
   }else if(i<v.size()-1&&v[i+1]>-1*v[i]){
    v[i+1]=v[i+1]+v[i];i++;
   }else if(i<v.size()-1&&v[i+1]<-1*v[i]){
    give=false;break;
   }




   }
   
     

    if(give){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
}



}

}