#include<bits/stdc++.h>
using namespace std;
#define int long long



signed main(){

     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
int n;cin>>n;
vector<int>v(n+1,0);
int total=0;
vector<int>pre(n+1,0);
for(int i=1;i<=n;i++){
    cin>>v[i];
    
}
string s="";
cin>>s;
for(int i=0;i<n;i++){
    if(s[i]=='1'){
        total^=v[i+1];
    }
}

for(int i=1;i<=n;i++){
    pre[i]=pre[i-1]^v[i];
}


int q;
cin>>q;
while(q--){

int a,b;
cin>>a;
if(a==2){
    int b;
cin>>b;
if(b==0){
cout<<(total^pre[n])<<" ";

}else{

cout<<total<<" ";

}


}else{
int l,r;
cin>>l>>r;
total^=pre[r]^pre[l-1];



}



}
cout<<endl;
}

}