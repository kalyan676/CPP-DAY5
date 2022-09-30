#include<iostream>
using namespace std;
int main()
{
	float q,price,discount,net,total;
	cout<<"enter the price";
	cin>>price;
	cout<<"enter the quantity";
	cin>>q;
	if(q>1000)
	{
		net=(q*price);
		discount=0.1*net;
		total = net-discount;
	}
	else
	{
		total=q*price;
	}
	cout<<"total expenses = "<<total;
	return 0;
}
