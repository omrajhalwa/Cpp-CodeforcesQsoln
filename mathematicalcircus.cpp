#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int t;
cin>>t;
while(t--){


int n,k;
cin>>n>>k;
vector<pair<int,int>>v;
bool bo=true;
if(k%2==0){
int p=0;
for(int i=1;i<=n;i=i+2){

if(p%2==0){
    if((i+1+k)*i%(4)!=0){
bo=false;
break;
}
    v.push_back(make_pair(i+1,i));p++;
}else{
    if((i+k)*(i+1)%4!=0){
bo=false;
break;
}
     v.push_back(make_pair(i,i+1));p++;
}

}



}else{


int p=0;
for(int i=1;i<=n;i=i+2){

if((i+k)*(i+1)%4!=0){
bo=false;
break;
}
if(p%2==0){
    v.push_back(make_pair(i,i+1));p++;
}else{
     v.push_back(make_pair(i,i+1));p++;
}

}



}

if(!bo){
    cout<<"NO"<<endl;
}else{
    cout<<"YES"<<endl;
    for(auto it:v){
        cout<<it.first<<" "<<it.second<<endl;
    }
}

}

}