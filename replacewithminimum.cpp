#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
string s="";
cin>>s;
vector<int>hash(29,-1);
char ch='a',ph='1';
for(int i=0;i<n;i++){
    
    

     
    if(ch>s[i]) continue;
           if(k>=s[i]-ch){
            k-=s[i]-ch;
            if(ch<s[i]){
                ch=s[i];
            }
            hash[s[i]-'a']=1;
           }else{
            if(k>0){
             hash[s[i]-'a']=s[i]-k-'a'+1;
             ph=s[i];
            }
            k=0;
           }
        

        

    
    
}


for(int i=0;i<n;i++){
           if(s[i]<=ch){
                s[i]='a';
            }else if(s[i]<=ph&&ph!='1'){
                
            }
}


cout<<s<<endl;

}

}
