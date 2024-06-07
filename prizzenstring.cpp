#include<bits/stdc++.h>
using namespace std;
#define int long long



void solve( string s) {
	




for(char i='a';i<='z';i++){
	if(s.find(i)==string::npos){
		cout<<i<<endl;
		return;
	}
}
map<string,int>mp;
string p="aa";bool give=false;
for(char i='a';i<='z';i++){
	p[0]=i;
	for(char i='a';i<='z';i++){
     p[1]=i;
	 
	 if(s.find(p)==string::npos){
		mp[p]++;
		give=true;
	 }
	}
}

if(give){
	auto it=mp.begin();
	cout<<it->first<<endl;
	return;
}
map<string,int>m;
string l="aaa";give=false;
for(char i='a';i<='z';i++){
	l[0]=i;
	for(char j='a';j<='z';j++){l[1]=j;
	  for(char k='a';k<='z';k++){
	      l[2]=k;
		  if(s.find(l)==string::npos){
			m[l]++;give=true;
		  }
       }
    }
}

if(give){
	auto itt=m.begin();
	cout<<itt->first<<endl;
}


return;
}







signed main(){
 ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

int t;cin>>t;
while(t--){
int n;cin>>n;
string s="";
cin>>s;

solve(s);


}
}