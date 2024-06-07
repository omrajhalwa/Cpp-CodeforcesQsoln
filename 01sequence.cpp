#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
//YhdtH%@&#4444%%voeingioenovdsnioenoinoibn.....................

string s,b;
int n,m;
cin>>n>>m;
cin>>s>>b;
bool give=true;

for(int i=0;i<n-m+1;i++){
   if(s[i]==b[0]){
       give=true;
       break;
   }else{
    give=false;
   }

}
int j=1;
for(int i=n-m+1;i<s.size();i++){
if(s[i]==b[j]){

}else{
    give=false;
    break;
}
j++;

}


if(give){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}



}
    }
    