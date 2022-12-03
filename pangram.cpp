#include<bits/stdc++.h>
using namespace std;

int main(){
    int l;
    cin>>l;
string t;
cin>>t;
map<char,int>mp;
for(int i=0;i<26;i++){
    mp[97+i]++;
}for(int i=0;i<26;i++){
    mp[65+i]++;
}
for(int i=0;i<t.size();i++){
    mp[t[i]]++;
}
int n=0;
for(int i=0;i<26;i++){
    if(mp[65+i]>1||mp[65+32+i]>1){
        continue;
    }else{
        cout<<"NO"<<endl;
        n++;
        break;
    }
}
if(n==0){
    cout<<"YES"<<endl;
}

}