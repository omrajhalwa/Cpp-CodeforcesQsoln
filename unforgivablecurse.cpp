#include<bits/stdc++.h>


using namespace std;


signed main(){

int t;cin>>t;
while(t--){
    int n, k;
    cin>>n>>k;
    string s="";
    cin>>s;
    string t="";
    cin>>t;map<int,int>m;
    map<int,int>mp;bool give=true;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
        m[t[i]]++;
    }
    for(int i=0;i<n;i++){
        if(mp[t[i]]==m[t[i]]){

        }else{
            give=false;
        }
    }
    if(s==t){
        cout<<"YES"<<endl;
    }
    else if(give){
int p;
if(n-k<0){
    p=0;
}else{
p=n-k;
}
for(;p<k;p++){
    if(p<n&&s[p]==t[p]){

    }else{
        give=false;
    }
}
if(give){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}



    }else{
        cout<<"NO"<<endl;
    }


}
}