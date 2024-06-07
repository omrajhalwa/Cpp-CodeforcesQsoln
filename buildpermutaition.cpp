#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n,a,b;
cin>>n>>b>>a;
if(abs(a-b)>1){
    cout<<-1<<endl;
}
else if(n%2==0&&(((n-2)/2<a||(n-2)/2<b)||n-2<a+b)){
    
    cout<<-1<<endl;
    
}else if(n%2!=0&&(((n-2)/2+1<a||(n-2)/2+1<b)||n-2<a+b)){
    
    cout<<-1<<endl;
    
}else{

vector<int>v;
for(int i=1;i<=n;i++){
    v.push_back(i);
}
int p=0,k=0;int i=0,j=v.size()-1;
if(a>=b){

while(a!=p&&i<v.size()-1){
    swap(v[i],v[i+1]);
    p++;i=i+2;
}
if(a!=0)
b-=a-1;
while(b!=k&&j-1>=0){
    swap(v[j],v[j-1]);
    j=j-2;k++;
}

}else{

while(b!=p&&j-1>=0){
    swap(v[j],v[j-1]);
    p++;j=j-2;
}
if(b!=0)
a-=b-1;
while(a!=k&&i<v.size()-1){
    swap(v[i],v[i+1]);
    i=i+2;k++;
}



}
for(auto it:v){cout<<it<<" ";}
cout<<endl;
}
}

}