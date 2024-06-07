#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

int t;
cin>>t;
while(t--){
int a,b,n;
cin>>a>>b>>n;
vector<int>v;v.push_back(b);
int cnt=2;
int sum=0;
for(int i=1;i<=n&&cnt<n;i++,cnt++){
    sum+=i;
v.push_back(b-sum);
}
v.push_back(a);
bool give=true;
reverse(v.begin(),v.end());
for(int i=0;i<v.size()-1;i++){
    if(v[i]>=v[i+1]){
        give=false;
    }
    if(i>0){
        if(v[i]-v[i-1]<=v[i+1]-v[i]){
            give=false;
        }
    }
}
 
if(!give||n!=v.size()){
    cout<<-1<<endl;
}else{
    for(auto it:v){
        cout<<it<<" ";
    }cout<<endl;
}
}

}