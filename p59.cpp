#include<iostream>

using namespace std;

int main(){
    string s,a,b;
    int c=0,m=0;
   int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(i==0){
            a=s;
           }
            if(s!=a){
                b=s;
               m++; 
            }
            if(s==a){
                c++;
            }
        

    }
    if(c>m){
        cout<<a;
    }else{
        cout<<b;
    }
}