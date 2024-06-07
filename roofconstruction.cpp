#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v;
for(int i=1;i<n;i++){
    v.push_back(i);
}
for(int i=n-2;i>=0;i--){
    float j=log2(v[i]);
    if(ceil(j)==floor(j)){
        
        v.insert(v.begin()+i,0);break;
    }



}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;

}
}