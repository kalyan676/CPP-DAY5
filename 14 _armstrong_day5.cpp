#include<iostream>
using namespace std;
int main()
{
	int i,n,temp,sum=0;
	cout<<"enter the number:";
	cin>>n;
	temp=n;
	while(n!=0)
	{
		i = n%10;
		sum = sum+(i*i*i);
		n=n/10;
	}
	if(sum==temp)
	{
		cout<<"armstrong number";
	}
   else
   {
   	cout<<"not an armstrong number";
   }
   return 0;
}
