#include <iostream>
using std::cout;

int main()
{
	int max = 20;

	for(int i = 2; i <= 20; i++)
	{
		if(i%2==0) cout << i << " is even.\n";
	}	
	return 0;
}