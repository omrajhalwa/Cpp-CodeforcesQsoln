#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int q,n,m,w,e;
	    cin>>q>>n>>m>>w>>e;
	    
	   int num=abs(n-w)+abs(m-e);
	    int mn=min(min(q-n,n-1),min(q-m,m-1))+1;
	    int mx=min(min(q-w,w-1),min(q-e,e-1))+1;
	   int x=min((mn+mx),num);
if(x>0){
    cout<<x<<endl;
}else{
    cout<<0<<endl;
}
	    
	}
	return 0;
}