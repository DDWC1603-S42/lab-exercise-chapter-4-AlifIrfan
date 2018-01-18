#include <iostream>
using namespace std;

int main()
{
	int num,r,sum=0;

	cout<<"user input a number: "<<endl;
	cin>>num;
	for(;num>0;)
	{
		r=num % 10;
		sum=sum*10+r;
		num=num/10;
	}
	cout<<"The number in reverse order: "<<sum<<endl;

}
