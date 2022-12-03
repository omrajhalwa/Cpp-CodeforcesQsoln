#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
int t;
cin>>t;
for(int i=0;i<t;i++){
    string k,l;
    int n,m;
    cin>>k>>l;
    n=k.size()-1;
    m=l.size()-1;
    int h=0;
if(k[n]=='L'&&l[m]!='L'){
    cout<<">"<<endl;
    h++;
}else if(k[n]!='L'&&l[m]=='L'){
    cout<<"<"<<endl;
    h++;
}else if(k[n]=='L'&&l[m]=='L'){
    int o=0,p=0;h++;
    for(int j=0;j<=max(m,n);j++){
        if(k[j]=='X'){
            o++;
        } if(l[j]=='X'){
            p++;
        }
    
 
 
 
    }
    
    if(o>p){
        cout<<">"<<endl;
    }else if(o<p){
        cout<<"<"<<endl;
    }else{
        cout<<"="<<endl;
    }
}
 
if(k[n]=='S'&&l[m]!='S'&&h==0){
    cout<<"<"<<endl;
}if(k[n]!='S'&&l[m]=='S'&&h==0){
    cout<<">"<<endl;
}if(k[n]=='S'&&l[m]=='S'&&h==0){
    int oO=0,pP=0;
    for(int j=0;j<=max(m,n);j++){
        if(k[j]=='X'){
            oO++;
        } if(l[j]=='X'){
            pP++;
        }
    
 
 
 
    }if(oO>pP){
        cout<<"<"<<endl;
    }else if(oO<pP){
        cout<<">"<<endl;
    }else{
        cout<<"="<<endl;
    }
}
 
if(k[n]=='M'&&l[m]=='M'){
    int oOM=0,pPM=0;
    for(int j=0;j<=max(m,n);j++){
        if(k[j]=='X'){
            oOM++;
        } if(l[j]=='X'){
            pPM++;
        }
    
 
 
 
    }if(oOM>pPM){
        cout<<">"<<endl;
    }else if(oOM<pPM){
        cout<<"<"<<endl;
    }else{
        cout<<"="<<endl;
    }
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}
 
}