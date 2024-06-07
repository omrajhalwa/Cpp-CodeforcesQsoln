#include<bits/stdc++.h>
using namespace std;


signed main(){


string s="";

cin>>s;
map<char,int>mp;
map<int,int>m;
int up=0;
sort(s.begin(),s.end());
for(int i=0;i<s.size();i++){
    mp[s[i]]++;;
}for(int i=s.size()-1;i>=0;i--){
    m[s[i]]++;
if(m.size()==3){
    
    up=i+1;
    break;
}
}
string k="";
string p="";

int i=0;
while(i<s.size()&&i<up){
     if(i+1<s.size()&&s[i]<s[i+1]&&i+1<up){
        p.push_back(s[i+1]);
        k.push_back(s[i]);
        i=i+2;
        break;
     }else{
        
        p.push_back(s[i]);
        if(i+1<s.size()&&i+1<up){
        k.push_back(s[i+1]);
        }
        i=i+2;
     }
}
for(;i<s.size()&&i<up;i++){
    p.push_back(s[i]);
}

    i=up;string s1="";
    string s2="";
if(mp[s[up]]%2!=0){
i++;
}for(;i<s.size();i++){
    if(i%2==0){
        k.push_back(s[i]);
    }else{
        p.push_back(s[i]);
    }
}
if(mp[s[up]]%2!=0){
    p.push_back(s[up]);
}
for(int j=k.size()-1;j>=0;j--){
    p.push_back(k[j]);
}

cout<<p<<endl;
}


