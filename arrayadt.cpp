#include<iostream>
using namespace std;

class array{
private:

int *A;
int size;
int length;

public:

array(int size){
   // this->size=size;
    A=new int[size];
}

void create(){
    cout<<"enter number of elements:"<<flush;
    cin>>length;
    cout<<"enter the array elements:"<<endl;
    for(int i=0;i<length;i++){
        cout<<"array element:"<<i<<"="<<flush;
        cin>>A[i];

    }
}
void display(){
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
}


};

int main(){

array arr(10);
arr.create();
arr.display();


}
