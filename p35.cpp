#include <iostream>
using namespace std;

int main() {
 long long int n,k;
  long long int c=-1000000000000;
 cin>>n>>k;
 for(int i=0;i<n;i++){
    int a,b,j;
    cin>>a>>b;
    if(b<=k){
        j=a;
    }else{
        j=a-(b-k);
    }


    if(j>c){
        c=j;
    }
 }



cout<<c;

	return 0;
}