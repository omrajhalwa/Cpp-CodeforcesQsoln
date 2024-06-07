#include<bits/stdc++.h>
using namespace std;


string f(int ind1,int ind2,string s1,string s2){

if(ind1==0||ind2==0){
    return "";
}


if(s1[ind1-1]==s2[ind2-1]){
    string s="";
    s=f(ind1-1,ind2-1,s1,s2);s.push_back(s1[ind1-1]);
    return s;
}
string up=f(ind1-1,ind2,s1,s2);
string down=f(ind1,ind2-1,s1,s2);
if(up.size()>down.size()){
    return up;
}else{
    return down;
}

}


int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);

string s1;
string s2;
cin>>s1>>s2;
int n=s1.size(),m=s2.size();

vector<vector<string>>dp(n+1,vector<string>(m+1,""));
for(int ind1=1;ind1<=n;ind1++){
    for(int ind2=1;ind2<=m;ind2++){
        if(s1[ind1-1]==s2[ind2-1]){
    string s="";
    s=dp[ind1-1][ind2-1];s.push_back(s1[ind1-1]);
    dp[ind1][ind2]=s;
    
}else{
string up="";
up=dp[ind1-1][ind2];
string down="";
down=dp[ind1][ind2-1];
if(up.size()>down.size()){
    dp[ind1][ind2]=up;
   
}else{
    dp[ind1][ind2]=down;
}
}
    }
}
cout<<dp[n][m];
}