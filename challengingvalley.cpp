#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}

bool give=true,c;
int k=0;
for(int i=0;i<n-1;i++){
    if(v[i]<v[i+1]){
        give=true;
     k++;
    }else if(v[i]>v[i+1]){
        if(k>0){
        give=false;
        break;}
        
    }
}


if(give){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}

}








}