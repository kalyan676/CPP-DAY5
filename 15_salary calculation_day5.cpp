#include<iostream>
using namespace std;
int main()
{
	int salary,y;
	char q,g,pg,graduate;
	cout<<"enter the gender";
	cin>>g;
	cout<<"enter the years of service:";
	cin>>y;
	cout<<"enter the qualification:";
	cin>>q;
	if(g='m')
	{
		if(y>=10 && q = pg)
		{
			cout<<"salary=15000";
		}
		else if(y>=10 and q =graduate)
		{
			cout<<"salary = 10000";
		}
			else if(y<10 and q =pg)
		{
			cout<<"salary = 10000";
		}
		else
		{
			cout<<"salary=7000";
		}
	}
	else
	{
		if(y>=10 and q =pg)
		{
			cout<<"salary=12000";
		}
		else if(y>=10 and q =graduate)
		{
			cout<<"salary = 9000";
		}
			else if(y<10 and q =pg)
		{
			cout<<"salary = 10000";
		}
		else
		{
			cout<<"salary=6000";
		}
		return 0;
}
