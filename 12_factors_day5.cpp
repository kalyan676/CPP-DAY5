#include<iostream>
using namespace std;
int main()
{
	int n,i,a[100],N,count=0;
	cout<<"enter a number";
	cin>>n;
	cout<<"enter the nth factor:";
	cin>>N;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		count++;
		cout<<"\n"<<i;
		a[N]=i;	
		}
	}
	cout<<"\nno.of factors = "<<count;
	cout<<"nth factor="<<a[N];
	return 0;
}
