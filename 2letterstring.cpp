#include<bits/stdc++.h>
using namespace std;
#define int long long

bool cmp(string a,string b){
    if(a[0]>b[0]){return false;}
    else if(a[0]==b[0]){
        if(a[1]>b[1])return false;
        return true;
    }else{
        return true;
    }
}

signed main(){
    int t;cin>>t;
    while(t--){
int n;cin>>n;
vector<string>l(n);
for(int i=0;i<n;i++){
    cin>>l[i];
}
sort(l.begin(),l.end(),cmp);
//for(auto it:v){cout<<it<<" ";}

vector<vector<int>>v(12,vector<int>(12,0));
int ans=0;
for(int i=0;i<n;i++){

for(int j=0;j<12;j++){
    
    if(l[i][0]-'a'==l[i][1]-'a'){
        if(j!=l[i][1]-'a'){
    ans+=v[l[i][0]-'a'][j];}
    if(j!=l[i][0]){
    ans+= v[j][l[i][0]-'a'];
    }
    }else{
        if(j!=l[i][1]-'a'){
        ans+=v[l[i][0]-'a'][j];}
        if(j!=l[i][0]){
    ans+= v[j][l[i][0]-'a'];}
    if(j!=l[i][1]-'a'){
     ans+=v[l[i][1]-'a'][j];}
     if(j!=l[i][0]){
    ans+= v[j][l[i][1]-'a']; }
    }
}


    v[l[i][0]-'a'][l[i][1]-'a']++;
}

cout<<ans<<endl;

}
}