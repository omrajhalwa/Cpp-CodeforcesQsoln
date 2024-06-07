#include<bits/stdc++.h>
using namespace std;
//jai dada pawansut hanumaan ki jai...jai.....
int main(){ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;cin>>t;
while(t--){
string s="";
cin>>s;

bool give=false;

for(int i=s.size()-1;i>0&&!give;i--){
    
int c=s[i]-'0';
int d=s[i-1]-'0';
int p=c+d;
if(p/10!=0&&s[i]!='0'&&s[i-1]!='0'){
   s[i]='0'+p%10;
s[i-1]='0'+p/10;give=true;
break;

}

}
if(!give){
    string k="";
    k.push_back('0'+(s[0]+s[1]-'0'-'0')%10);
for(int i=2;i<s.size();i++){

k.push_back(s[i]);

}

s=k;
}


cout<<s<<endl;
}





}