#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int t;
cin>>t;
while(t--){
    int a;
    map<int,int>mp1;
    map<int,int>mp2;
    int k=0;
for(int i=0;i<6;i++){
cin>>a;
if(k%2==0){
mp1[a]++;k++;
}else{
mp2[a]++;k++;
}
}
int p=0;
for(auto it:mp1){
    if(it.second==2){
        p++;
    }

    
}for(auto itt:mp2){
    if(itt.second==2){
        p++;
    }

    
}

if(p==2){
    cout<<"NO"<<endl;
}else{
    cout<<"YES"<<endl;
}
}

}