#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;

vector<int>v(n);
int sum=0;
for(int i=0;i<n;i++){
    cin>>v[i];
    sum+=v[i];
}
vector<int>c;

if(sum%2!=0){
for(int i=0;i<n;i++){


if(v[i]%2==0){

int k=0;
while(v[i]%2==0&&v[i]>0){
    v[i]=v[i]/2;
    k++;
}
c.push_back(k);


}else{

int k=0;
while(v[i]%2!=0&&v[i]>0){
    v[i]=v[i]/2;
    k++;
}
c.push_back(k);




}




}

sort(c.begin(),c.end());
cout<<c[0]<<endl;
}else{
    cout<<0<<endl;
}



}

}