#include<iostream>
using namespace std;

int main(){long long int t;
cin>>t;
while(t--){
long long int n;
cin>>n;
string s;
cin>>s;
long long int a=0,b=0,c=0,d=0;
for(int i=0;i<n;i++){
    if(s[i]=='0'){
        a++;
    }else if(s[i]=='1'){
        b++;
    }
}
long long int p=1;
for(int i=0;i<n;i++){
    if(s[i]==s[i+1]){
        p++;
    }else{
        p=1;
    }
if(d<p){
    d=p;
}


}

long long int r=d*d;
if(r>a*b){
    cout<<r<<endl;
}else{
    cout<<a*b<<endl;
}

}






}