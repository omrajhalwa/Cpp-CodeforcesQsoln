#include<iostream>
using namespace std;

//program for lenght
int main(){
string str="holiday";
int count=0;
string::iterator it;
for(it=str.begin();it!=str.end();it++){
count++;

}cout<<count;
    return 0;
}