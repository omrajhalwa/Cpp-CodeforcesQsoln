#include<bits/stdc++.h>
using namespace std;

int main(){

long long int t;
cin>>t;
while(t--){
long long int n;
cin>>n;
vector<long long int>a(n);long long int j=1,pro=1;
vector<long long int>v;
for(int i=0;i<n;i++){
cin>>a[i];
pro=pro*a[i];
if(i+1==pow(2,j)){
    v.push_back(i+1);
    j++;
}
}
long long int po,k=v.size()-1,ans=0;
po=pow(2,n);
while(pro%po!=0&&k>=0){

pro=pro*v[k];
k--;ans++;

}
if(pro%po!=0)
{
    cout<<-1<<endl;
}else{
    cout<<ans<<endl;
}

}
}