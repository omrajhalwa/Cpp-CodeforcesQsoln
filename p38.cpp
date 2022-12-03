#include<iostream>
using namespace std;
int main(){
int a,b,x,y,z;
cin>>a>>b;
if(a==b){
    cout<<0<<endl;
    cout<<6<<endl;
    cout<<0<<endl;
}
else if(a+b==3){
    if(a<b){x=1,y=5;
    cout<<x<<endl;
    cout<<0<<endl;
    cout<<y<<endl;}else{
        x=5,y=1;
        cout<<x<<endl;
    cout<<0<<endl;
    cout<<y<<endl;
    }
}else if(a+b==4){if(a<b){x=1,y=4;
    cout<<x<<endl;
    cout<<1<<endl;
    cout<<y<<endl;}else{
        x=4,y=1;cout<<x<<endl;
    cout<<1<<endl;
    cout<<y<<endl;
    }
}else if(a+b==5){if(a<b){x=2,y=4;
    cout<<x<<endl;
    cout<<0<<endl;
    cout<<y<<endl;}else{
        x=4,y=2;cout<<x<<endl;
    cout<<0<<endl;
    cout<<y<<endl;
    }
}else if(a+b==6){if(a<b){x=2,y=3;
    cout<<x<<endl;
    cout<<1<<endl;
    cout<<y<<endl;}else{
        y=2,x=3;cout<<x<<endl;
    cout<<1<<endl;
    cout<<y<<endl;
    }
}else if(a+b==7){x=3,y=3;
    cout<<x<<endl;
    cout<<0<<endl;
    cout<<y<<endl;}
        
    
else if(a+b==8){if(a<b){x=3,y=2;
    cout<<x<<endl;
    cout<<1<<endl;
    cout<<y<<endl;}else{
        y=3,x=2;
        cout<<x<<endl;
    cout<<1<<endl;
    cout<<y<<endl;
    }
}else if(a+b==9){if(a<b){x=4,y=2;
    cout<<x<<endl;
    cout<<0<<endl;
    cout<<y<<endl;}else{
        x=2,y=4;
        cout<<x<<endl;
    cout<<0<<endl;
    cout<<y<<endl;
    }
}else if(a+b==10){if(a<b){x=4,y=1;
    cout<<x<<endl;
    cout<<1<<endl;
    cout<<y<<endl;}else{
        x=1,y=4;cout<<x<<endl;
    cout<<1<<endl;
    cout<<y<<endl;
    }
}else if(a+b==11){if(a<b){x=5,y=1;
    cout<<x<<endl;
    cout<<0<<endl;
    cout<<y<<endl;}else{
        x=1,y=5;cout<<x<<endl;
    cout<<0<<endl;
    cout<<y<<endl;
    }
}else{
    cout<<0<<endl;
    cout<<0<<endl;
    cout<<0<<endl;
}





    return 0;
}