#include <iostream>
using std::cin, std::cout, std::endl;

int main()
{
	int n;
	cout << "Get sum from (1 -> N): ";
	cin >> n;

	long long sum = 0; // to avoid integer-overflow
	for(int i = 1; i <= n; i++)
	{
		sum += i;
	}

	cout << "sum of " << n << " is: " << sum << endl;
	return 0;
}