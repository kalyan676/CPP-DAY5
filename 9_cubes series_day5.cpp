#include<iostream>
using namespace std;
int main()
{
	int i,j,rows,n=1;
	cout<<"enter the number of rows";
	cin>>rows;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;++j)
		{
			cout<<n*n*n<<" ";
			n++;
		}
		cout<<"\n";
	}
	return 0;
}
