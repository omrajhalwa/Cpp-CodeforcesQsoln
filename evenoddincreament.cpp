#include<bits/stdc++.h>
using namespace std;

int main(){
long long int t;
cin>>t;
while(t--){
long long int n,m;
cin>>n>>m;
long long g;
long long int e=0,o=0;
vector<long long>v;
for(int i=0;i<n;i++){
    cin>>g;
    if(g%2==0){
        e++;
    }else{
        o++;
    }
v.push_back(g);
}
long long sum=0;
for(int k=0;k<n;k++){
    sum+=v[k];
}






long long int a,b;
for(int i=0;i<m;i++){
cin>>a>>b;
if(a%2==0){
sum=sum+b*e;}
else if(a%2!=0){
    sum=sum+b*o;
}
cout<<sum<<endl;
if(a%2!=0&&b%2!=0){
    e=o+e;
    o=0;
}else if(a%2==0&&b%2!=0){
    o=o+e;
    e=0;
}

}



}





}