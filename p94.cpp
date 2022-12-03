#include <iostream>

using namespace std;

int main()
{
    int maj=0,min=0,str=0;
    string k[101]={"C","C#","D","D#","E","F","F#","G","G#","A","B","H"};
    string l,m,n;
    cin>>l>>m>>n;
for(int j=0;j<6;j++){
    string x,a,b,c;
    a=l;
    b=m;
    c=n;
if(j==1){
    x=b;
    b=c;
    c=x;
}if(j==2){
   x=a;
   a=b;
   b=x;

}if(j==3){
x=a;
a=b;
b=c;
c=x;
}if(j==4){
x=a;
a=c;
c=b;
b=x;
}if(j==5){
x=a;
a=c;
c=x;
}
int q,w,e;
for(int i=0;i<12;i++){
    if(k[i]==a){
        q=i;
    } if(k[i]==b){
        w=i;
    } if(k[i]==c){
        e=i;
    }
    
}

int p,o;
if(w>q){
p=(w-q);
}else{
    p=q-w;
    p=12-p;
}
if(e>w){
o=(e-w);
}else{
    o=w-e;
    o=12-o;
}


if(p==4&&o==3){
    maj++;

}else if(p==3&&o==4){
    min++;
    
}

}
if(maj>0){
    cout<<"major";
}else if(min>0){
    cout<<"minor";
}else{
    cout<<"strange";
}

    return 0;
}