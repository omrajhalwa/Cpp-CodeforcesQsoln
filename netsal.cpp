#include<iostream>
using namespace std;

int main(){
float netsalary;
float basic;
float percentageallow;
float percentagededuction;

cout<<"enter the basic of employee"<<endl;
cin>>basic;
cout<<"enter the percentage allowance"<<endl;
cin>>percentageallow;

cout<<"enter the percentage deduction"<<endl;
cin>>percentagededuction;






netsalary = basic+basic*percentageallow/100-basic*percentagededuction/100;
cout<<"net salary is "<<netsalary<<endl;

    return 0;
}