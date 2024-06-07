#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
int n;

cin>>n;
string s="";
cin>>s;
int one=0;char c=s[0];
for(int i=1;i<s.size();i++){

if(c=='0'&&s[i]=='0'){
    c='0';
    cout<<'+';
}else if(c=='0'&&s[i]=='1'){
    c='1';cout<<'+';
}else if(c=='1'&&s[i]=='0'){
    c='1';cout<<'+';
}else if(c=='1'&&s[i]=='1'){
    c='0';cout<<'-';
}


}
cout<<endl;
}

}