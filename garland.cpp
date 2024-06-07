#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
 ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

int t;cin>>t;
while(t--){
   
    string s;cin>>s;map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    if(mp.size()==1){
        cout<<-1<<endl;
    }else if(mp.size()>2){
        cout<<4<<endl;
    }else if(mp.size()==2){
        if(mp[s[0]]==3||mp[s[0]]==1){
            cout<<6<<endl;
        }else{
            cout<<4<<endl;
        }
    }else{
        cout<<4<<endl;
    }
}
}