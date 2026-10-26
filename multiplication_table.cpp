#include <iostream>
using std::cout, std::cin,
      std::endl;

int main()
{
	int multiple_matrix = 12;

	for(int i = 1; i <= multiple_matrix; i++)
	{
		for(int j = 1; j <= multiple_matrix; j++)
		{
			cout << i << 'x' << j << " = " << i*j << ' ';
		}
		cout << endl;
	}

	return 0;
}