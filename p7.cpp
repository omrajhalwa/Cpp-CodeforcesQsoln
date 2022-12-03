#include<iostream>
using namespace std;

int main(){

string s,b;
cin>>s;
int n=s.size(),h=101,o=0,e=101,l=0;
for(int i=0;i<n;i++){
if(s[i]=='h'&&i<h){
    h=i;
}
if(s[i]=='o'&&i>o){
    o=i;
}


}
for(int i=0;i<n;i++){
    if(s[i]=='e'&&i>h&&i<o&&i<e){
        e=i;
    }
    
}
for(int i=0;i<n;i++){
    if(s[i]=='l'&&i>h&&i>e&&i<o){
        l++;

    }
    
}

//cout<<h<<" "<<e<<" "<<l<<" "<<o;
if(h<o&&e>h&&e<o&&l>1){
    cout<<"YES";
}else{
    cout<<"NO";
}
    return 0;
}