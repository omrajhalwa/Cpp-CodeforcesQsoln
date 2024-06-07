#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int t;
cin>>t;
while(t--){

int n;
cin>>n;
vector<int>v(n);int sum=0,mn=INT64_MAX;
for(int i=0;i<n;i++){
    cin>>v[i];
   if(i!=0){
    if(mn>v[i]){
        mn=v[i];
        sum=i;
    }
   }
}
int bob=INT64_MAX;

v[0]--;
for(int i=0;i<n;i++){

if(i!=sum){

    bob=min(bob,v[i]);
}


}



if(mn<=bob){
    cout<<"Alice"<<endl;
}else{
    cout<<"Bob"<<endl;
}

}

}





