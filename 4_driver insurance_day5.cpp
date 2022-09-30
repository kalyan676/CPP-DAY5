#include<iostream>
using namespace std;
int main()
{

char sex,ms;
int age;
cout<<"Enter age, sex, marital status:";
cin>>age>>sex>>ms;
if (ms=='M')
cout<<"The driver is insured";
else
{
if (sex=='M')

{
if (age>30)
cout<<"Driver is insured";

else
cout<<"Driver is not insured";
}
else
{

if (age>25)
cout<<"Driver is insured";
else
cout<<"Driver is not insured";
}
}return 0;
}

