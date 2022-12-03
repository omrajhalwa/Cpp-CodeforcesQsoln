#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
int n,o=0,e=0;
cin>>n;
for(int j=0;j<n;j++){
    int a;
    cin>>a;
    if(a%2==0){
        e++;
    }else{
        o++;
    }
}
if(o==n){
    cout<<"Alice"<<endl;
}else if(e==n){
    cout<<"Alice"<<endl;
}
else if(n%2==0){
    if(o==e){
        cout<<"Bob"<<endl;
    }else if(o>e){
        cout<<"Alice"<<endl;
    }else if(o<e){
        cout<<"Alice"<<endl;
    }
}else{
    if(o>e){
        cout<<"Bob"<<endl;
    }else{
        cout<<"Alice"<<endl;
    }
}


}







}