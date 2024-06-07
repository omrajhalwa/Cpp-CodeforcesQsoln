#include<bits/stdc++.h>
using namespace std;


int main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n;
string s="";
cin>>s;

//reverse(s.begin(),s.end());
int ans=0;
for(int i=0;i<n;i++){
int k=0;
int p,j,l=n-1;
p=i;j=n-1;

while(p<n){

 if(s[p]==s[j]&&p<j){
    
    p++;
    j--;
    k++;
    l=j;
}else if(p>=j){
    p++;
    j=l;
}
else{
    j--;
}



}
if(ans<k){
    
    ans=k;
}

}
cout<<ans<<endl;



//1
//71
//aaacdacababdbdbadcbbbbcecbedabdcbbeeebaabaacdceaeedaacedadbaecabaadeeea
}
}