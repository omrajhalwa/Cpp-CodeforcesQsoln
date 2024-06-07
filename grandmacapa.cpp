#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
string s="";cin>>s;

int i=0,j=s.size()-1;
int a=-1,b=-1;
while(i<=j){
if(s[i]==s[j]){
}else{
    a=i;b=j;
    break;
}
i++;j--;
}

if(a==-1&&b==-1){cout<<0<<endl;}
else{
int i=0,j=s.size()-1;
int ans1=0,ans2=0;
bool give=true;bool give1=true;
while(i<=j&&give){

if(s[i]==s[j]){
    i++;j--;
}else if(s[i]==s[a]){
    i++;ans1++;
}else if(s[j]==s[a]){
    j--;ans1++;
}else{
    give=false;
}
}
i=0,j=s.size()-1;
while(i<=j&&give1){

if(s[i]==s[j]){
    i++;j--;
}else if(s[j]==s[b]){
    j--;ans2++;
}else if(s[i]==s[b]){
i++;ans2++;
}
else{
    give1=false;
}
}

if(give&&give1){
    cout<<min(ans1,ans2)<<endl;
}else if(!give&&!give1){
    cout<<-1<<endl;
}else if(give){
    cout<<ans1<<endl;
}else{
    cout<<ans2<<endl;
}

}

}

}