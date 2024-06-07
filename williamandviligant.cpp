#include<bits/stdc++.h>
using namespace std;

int main(){

int n,q;
cin>>n>>q;
string s="";
cin>>s;int ans=0;
if(s.size()>2){
for(int i=1;i<n-1;i++){ 
if(s[i]=='b'&&s[i-1]=='a'&&s[i+1]=='c'){
    ans++;
}
}
}
while(q--){

int pos;char sc;
cin>>pos>>sc;

if(s[pos-1]!=sc){

if(pos-2>=0&&pos<n&&s[pos-1]=='b'&&s[pos-1-1]=='a'&&s[pos-1+1]=='c'){
ans--;

}else if(pos-1>=0&&pos+1<n&&s[pos-1]=='a'&&s[pos]=='b'&&s[pos+1]=='c'){
    ans--;
}else if(pos-3>=0&&pos-1<n&&s[pos-1]=='c'&&s[pos-1-1]=='b'&&s[pos-3]=='a'){
    ans--;
}

if(pos>=0&&pos+1<n&&sc=='a'&&s[pos]=='b'&&s[pos+1]=='c'){
    ans++;
}else if(pos-2>=0&&pos<n&&sc=='b'&&s[pos-1-1]=='a'&&s[pos]=='c'){
    ans++;
}else if(pos-3>=0&&pos-2<n&&sc=='c'&&s[pos-2]=='b'&&s[pos-3]=='a'){
    ans++;
}


s[pos-1]=sc;

}
cout<<ans<<endl;
}
// another approach not came into my mind
}