#include<bits/stdc++.h>
using namespace std;

int main(){
int t;cin>>t;while(t--){
int n;cin>>n;

vector<int>v(n);
vector<int>so(n);
for(int i=0;i<n;i++){
cin>>v[i];
so[i]=v[i];
}
sort(so.begin(),so.end());
int i=0,j=n-1,k=0,l=n-1;
while(j-i+1>=4&&i<j&&k<l){

if(v[i]==so[k]){
    i++;
    k++;
}else if(v[i]==so[l]){
    i++;
    l--;
}else if(v[j]==so[k]){
    j--;
    k++;
}else if(v[j]==so[l]){
    j--;
    l--;
}else{
    break;
}

}

 if(j-i+1>=4&&i<j&&k<l){
cout<<i+1<<" "<<j+1<<endl;
}else{
    cout<<-1<<endl;
}

}
}