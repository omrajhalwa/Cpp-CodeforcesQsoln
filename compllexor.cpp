#include<bits/stdc++.h>
using namespace std;

int main(){
string s1;
string s2;
cin>>s1>>s2;
vector<int>v;
int count=0;
for(int i=0;i<s1.size();i++){
if(s1[i]==s2[i]){
v.push_back(0);

}else{
v.push_back(1);
}
}
bool give=true;
for(int i=0;i<v.size()-1;i++){
    if(v[i]==v[i+1]){
      
    }else{
        give=false;
        break;
    }
}

if(give){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}

if(s1[0]==s2[0]){
int l,r;
for(int i=0;i<s1.size();i++){
    if(s1[i]=='1'){
        l=i+1;
        break;
    }
}for(int i=s1.size()-1;i>=0;i--){
    if(s1[i]=='1'){
    r=i+1;
    break;
    }
}











}




}