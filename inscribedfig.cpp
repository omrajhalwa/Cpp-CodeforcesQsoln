#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){

int n;cin>>n;
vector<int>v(n);
for(int &x:v){cin>>x;}
bool give=true;int ans=0;
for(int i=0;i<n-1;i++){
    if((v[i]==2&&v[i+1]==3)||(v[i]==3&&v[i+1]==2)){
        give=false;
    }else if(i+2<n&&v[i]==3&&v[i+1]==1&&v[i+2]==2){
        ans+=6;
        i+=1;
    }else if((v[i]==1&&v[i+1]==3)||(v[i]==3&&v[i+1]==1)){
        ans+=4;
    }else if((v[i]==1&&v[i+1]==2)||(v[i]==2&&v[i+1]==1)){
        ans+=3;
    }



}



if(give){
    cout<<"Finite"<<endl;
    cout<<ans<<endl;
}else{
    cout<<"Infinite"<<endl;
}
}