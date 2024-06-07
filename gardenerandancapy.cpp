#include<bits/stdc++.h>
using namespace std;
//chutiye
int main(){


int t;
cin>>t;
while(t--){
string s;
cin>>s;
bool a=false;int p;
for(int i=1;i<s.size()-1;i++){
if(s[i]=='a'){
    a=true;p=i;
    break;
}

}

string a1="";string a2="";string a3="";
if(a){
for(int i=0;i<p;i++){
a1.push_back(s[i]);
}for(int i=p+1;i<s.size();i++){
    a3.push_back(s[i]);
}
a2.push_back('a');

}else{
    for(int i=1;i<s.size()-1;i++){
a2.push_back(s[i]);
} a1.push_back(s[0]);

a3.push_back(s[s.size()-1]);
}



cout<<a1<<" "<<a2<<" "<<a3<<endl;
}



}
