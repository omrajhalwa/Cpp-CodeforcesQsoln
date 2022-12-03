#include<iostream>
using namespace std;

int main(){
    int t;
cin>>t;
while(t--){
string s;
int a=0,b=0,c;
cin>>c;
cin>>s;
for(int i=0;i<s.size();i++){
    if(s[i]=='Q'){
        a++;
    }else if(a>b){
        b++;
    }
}

if(a<=b){
    cout<<"Yes"<<endl;
}else{
    cout<<"No"<<endl;
}

}



}

