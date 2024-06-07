#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
string s1="";
string s2="";
cin>>s1>>s2;
int x=0,q;
cin>>x>>q;


vector<int>hash(s1.size(),0);

int same=0;int total=s1.size();
for(int i=0;i<s1.size();i++){
    if(s1[i]==s2[i]){same++;}
}
vector<int>pre(q+x+2,0);
map<int,int>mp;
int j=1;int block=0;
while(j<=q){

int a;
cin>>a;
if(a==1){
int b;cin>>b;
block++;
mp[j+x]



}else if(a==2){
int x1,x2,x3,x4;
cin>>x1>>x2>>x3>>x4;
if(x1==1&&x3==1){
char rep;
if(s1[x2-1]==s2[x2-1]){same--;}
if(s1[x4-1]==s2[x4-1]){same--;}
rep=s1[x2-1];
s1[x2-1]=s1[x4-1];
s1[x4-1]=rep;
if(s1[x2-1]==s2[x2-1]){same++;}
if(s1[x4-1]==s2[x4-1]){same++;}



}else if(x1==1&&x3==2){
char rep;
if(s1[x2-1]==s2[x2-1]){same--;}
if(s2[x4-1]==s1[x4-1]){same--;}
rep=s1[x2-1];
s1[x2-1]=s2[x4-1];
s2[x4-1]=rep;
if(s1[x2-1]==s2[x2-1]){same++;}
if(s2[x4-1]==s1[x4-1]){same++;}
}else if(x1==2&&x3==1){
char rep;
if(s2[x2-1]==s1[x2-1]){same--;}
if(s2[x4-1]==s1[x4-1]){same--;}
rep=s2[x2-1];
s2[x2-1]=s1[x4-1];
s1[x4-1]=rep;
if(s2[x2-1]==s1[x2-1]){same++;}
if(s2[x4-1]==s1[x4-1]){same++;}
}else if(x1==2&&x3==2){
char rep;
if(s2[x2-1]==s1[x2-1]){same--;}
if(s2[x4-1]==s1[x4-1]){same--;}
rep=s2[x2-1];
s2[x2-1]=s2[x4-1];
s2[x4-1]=rep;
if(s2[x2-1]==s1[x2-1]){same++;}
if(s2[x4-1]==s1[x4-1]){same++;}
}

}else{

if(same+block==s1.size()){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}

j++;
}


}

}