#include<bits/stdc++.h>
using namespace std;
using in= long long;



int main(){
int t;
cin>>t;
while(t--){
    in n;
cin>>n;
vector<in>v(n);
vector<in>ans(n);
in mux=0,sux=0;
for(int i=0;i<n;i++){
cin>>v[i];
ans[i]=v[i];

}
sort(ans.begin(),ans.end());
for(int i=0;i<n;i++){
mux=sux;
sux=max(sux,ans[i]);
}
for(int i=0;i<n;i++){
if(sux!=v[i]){
cout<<v[i]-sux<<" ";
}else if(sux==v[i]){
    cout<<sux-mux<<" ";
}

}
cout<<endl;





}








}