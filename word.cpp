#include<bits/stdc++.h>
using namespace std;

int main(){

string s;
cin>>s;
int a=0,b=0;

for(int i=0;i<s.size();i++){
if(s[i]<97){
    a++;
}else{
    b++;
}

}

if(a<=b){
for(int i=0;i<s.size();i++){
    if(s[i]<97){
        s[i]=s[i]+32;
    }
}
}
else{
for(int i=0;i<s.size();i++){
    if(s[i]>=97){
        s[i]=s[i]-32;
    }
}



}
cout<<s<<endl;


}