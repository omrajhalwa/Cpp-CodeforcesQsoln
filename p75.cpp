#include<iostream>
using namespace std;

int fun(string a2,string b2){
int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
    int a1=0,b1=0,fe=0,c1=0,d1=0,e1=0,f1=0,g1=0,h1=0,i1=0,j1=0,k1=0,l1=0,m1=0,n1=0,o1=0,p1=0,q1=0,r1=0,s1=0,t1=0,u1=0,v1=0,w1=0,x1=0,y1=0,z1=0;

for(int i=0;i<b2.size();i++){
    if(b2[i]=='a'){
        a++;
    }else if(b2[i]=='b'){
        b++;
    }else if(b2[i]=='c'){
        c++;
    }else if(b2[i]=='d'){
        d++;
    }else if(b2[i]=='e'){
        e++;
    }else if(b2[i]=='f'){
        f++;
    }else if(b2[i]=='g'){
        g++;
    }else if(b2[i]=='h'){
        h++;
    }else if(b2[i]=='i'){
        i++;
    }else if(b2[i]=='j'){
        j++;
    }else if(b2[i]=='k'){
        k++;
    }else if(b2[i]=='l'){
        l++;
    }else if(b2[i]=='m'){
        m++;
    }else if(b2[i]=='n'){
        n++;
    }else if(b2[i]=='o'){
        o++;
    }else if(b2[i]=='p'){
        p++;
    }else if(b2[i]=='q'){
        q++;
    }else if(b2[i]=='r'){
        r++;
    }else if(b2[i]=='s'){
        s++;
    }else if(b2[i]=='t'){
        t++;
    }else if(b2[i]=='u'){
        u++;
    }else if(b2[i]=='v'){
        v++;
    }else if(b2[i]=='w'){
        w++;
    }else if(b2[i]=='x'){
        x++;
    }else if(b2[i]=='y'){
        y++;
    }else if(b2[i]=='z'){
        z++;
    }

}
for(int i=0;i<a2.size();i++){

if(a2[i]=='a'){
        a1++;
        if(a==0&&a1>0){
            fe++;
        }
    }else if(a2[i]=='b'){
        b1++;
        if(b==0&&b1>0){
            fe++;
        }
    }else if(a2[i]=='c'){
        c1++;
        if(c==0&&c1>0){
            fe++;
        }
    }else if(a2[i]=='d'){
        d1++;
        if(d==0&&d1>0){
            fe++;
        }
    }else if(a2[i]=='e'){
        e1++;
        if(e==0&&e1>0){
            fe++;
        }
    }else if(a2[i]=='f'){
        f1++;
        if(f==0&&f1>0){
            fe++;
        }
    }else if(a2[i]=='g'){
        g1++;
        if(g==0&&g1>0){
            fe++;
        }
    }else if(a2[i]=='h'){
        h1++;
        if(h==0&&h1>0){
            fe++;
        }
    }else if(a2[i]=='i'){
        i1++;
        if(i==0&&i1>0){
            fe++;
        }
    }else if(a2[i]=='j'){
        j1++;
        if(j==0&&j1>0){
            fe++;
        }
    }else if(a2[i]=='k'){
        k1++;
        if(k==0&&k1>0){
            fe++;
        }
    }else if(a2[i]=='l'){
        l1++;
        if(l==0&&l1>0){
            fe++;
        }
    }else if(a2[i]=='m'){
        m1++;
        if(m==0&&m1>0){
            fe++;
        }
    }else if(a2[i]=='n'){
        n1++;
        if(n==0&&n1>0){
            fe++;
        }
    }else if(a2[i]=='o'){
        o1++;
        if(o==0&&o1>0){
            fe++;
        }
    }else if(a2[i]=='p'){
        p1++;
        if(p==0&&p1>0){
            fe++;
        }
    }else if(a2[i]=='q'){
        q1++;
        if(q==0&&q1>0){
            fe++;
        }
    }else if(a2[i]=='r'){
        r1++;
        if(r==0&&r1>0){
            fe++;
        }
    }else if(a2[i]=='s'){
        s1++;
        if(s==0&&s1>0){
            fe++;
        }
    }else if(a2[i]=='t'){
        t1++;
        if(t==0&&t1>0){
            fe++;
        }
    }else if(a2[i]=='u'){
        u1++;
        if(u==0&&u1>0){
            fe++;
        }
    }else if(a2[i]=='v'){
        v1++;
        if(v==0&&v1>0){
            fe++;
        }
    }else if(a2[i]=='w'){
        w1++;
        if(w==0&&w1>0){
            fe++;
        }
    }else if(a2[i]=='x'){
        x1++;
        if(x==0&&x1>0){
            fe++;
        }
    }else if(a2[i]=='y'){
        y1++;
        if(y==0&&y1>0){
            fe++;
        }
    }else if(a2[i]=='z'){
        z1++;
        if(z==0&&z1>0){
            fe++;
        }
    }

}

if(a1>=a&&b1>=b&&c1>=c&&d1>=d&&e1>=e&&f1>=f&&g1>=g&&h1>=h&&i1>=i&&j1>=j&&k1>=k&&l1>=l&&m1>=m&&n1>=n&&o1>=o&&p1>=p&&q1>=q&&r1>=r&&s1>=s&&t1>=t&&u1>=u&&v1>=v&&w1>=w&&x1>=x&&y1>=y&&z1>=z){
   
    
    return 1;
}else{
    return 0;
}

}




int main(){

string a2;
string b2;
cin>>a2>>b2;
if(fun(a2,b2)==1){
cout<<"YES";
}else{
    cout<<"NO";
}




}