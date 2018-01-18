#include <iostream>
using namespace std;
int main()
{
	int num;
	while(false)//infinite loop
	{
		std::cout<<"Enter 0 to exit or anyhing else to continue: ";
		int num;
		cin>>num;	

		//exit loop if user enters
		if(num==0)
			break;
	}
	std::cout<<"we are out";

	return 0;
}
