#include<bits/stdc++.h>
using namespace std;

int main(){


string s;
cin>>s;
bool flag=true;
int a=0;
for(int i=0;i<s.size();i++){

if(s[i]=='7'||s[i]=='4'){
a++;
}else{
    flag=false;
}

}
int p=0,k=0,r=0;
while(a>0){
    k=a%10;
    a=a/10;
    if(k==4||k==7){
        p++;
    }
    r++;
}








if((flag||p==r)&&p!=0){
cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}





}