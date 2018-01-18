#include <iostream>
using namespace std;

int main()
{
	int i,j,row,a,b;
	
	cout<<"Display the pattern"<<endl;
	cout<<"-------------------"<<endl;

	i,j;
	cout<<"Input number of rows :"<<endl;
	cin>>row;

	for(i=1;i<=row;i++)
	{
		for(b=a;b<=1;b++)
		{
			cout<<" "<<endl;
		}
	for(j=1;j<=i;j++)
	cout<<"*";
	cout<<endl;
	a--;
	}
}
