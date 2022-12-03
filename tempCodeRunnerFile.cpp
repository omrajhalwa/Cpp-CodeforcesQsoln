#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int q,n,m,w,e;
	    cin>>q>>n>>m>>w>>e;
	    
	   int num=abs(n-w)+abs(m-e);
	    int mn=min(n,m)+q-max(w,e)+1;
	    int mx=min(w,e)+q-max(n,m)+1;
	    int mun=min(n,m)+1-min(w,e)+1;
	    int mux=min(w,e)+1-min(n,m)+1;
	   int x=min(min(min(min(mn,mx),num),mux),mun);
if(x>0){
    cout<<x<<endl;
}else{
    cout<<0<<endl;
}
	    
	}
	return 0;
}