#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    string s="";
    cin>>s;
    bool tell=true;
for(int i=0;i<s.size()-1;i++){

if(s[i]=='Y'&&s[i+1]=='e'){

}else if(s[i]=='e'&&s[i+1]=='s'){

}else if(s[i]=='s'&&s[i+1]=='Y'){

}else{
    tell=false;
}




}
if(s.size()==1){

if(s[0]=='Y'||s[0]=='e'||s[0]=='s'){
    tell=true;
}else{
    tell=false;
}





}


if(tell){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}

}







}