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
sort(v.begin(),v.end());
reverse(v.begin(),v.end());
vector<int>c;int j=0,i=0,k=1;
while(j<n){

if(j%2==0){
c.push_back(v[i]);
i++;
}else{
    c.push_back(v[n-k]);
    k++;
}

j++;




}
bool give=true;
v[0]=c[0];
for(int i=1;i<n;i++){
    if(v[i-1]==c[i]){give=false;}
   v[i]+=v[i-1]+c[i];
}


if(give){
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        cout<<c[i]<<" ";
    }cout<<endl;
}else{
    cout<<"NO"<<endl;
    
}

}
}