#include<iostream>
using namespace std;

int main()

{

int m1,m2,m3,total;
float avg;

cout<<"Enter the mark of subject";
cin>>m1>>m2>>m3;
total=m1+m2+m3;
avg=total/3;


if(avg>=60)
{
cout<<"first division"<<endl;
cout<<avg<<"%";
}
else if (avg>=35 && avg<60)
{
cout<<"second division"<<endl;
cout<<avg<<"%";
}
else// (avg<35)
{
cout<<"third division"<<endl;
cout<<avg<<"%";
}

return 0;
}