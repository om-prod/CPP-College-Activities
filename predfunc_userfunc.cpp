#include <iostream>
#include <ctime>
using std::cout, std::cin, 
      std::endl;

// I did the most simplest program on 
// combining a predefined function and
// user-defined function.

// I landed with "largest of three" and its
// values generated with pseudo-randomness
// out of 150.

// nice

int largest_of_three(int a, int b, int c)
{    
	int largest = a;

	if(largest < b) { largest = b; }
	if(largest < c) {largest = c; }

	return largest;	
}

int main()
{
    srand(time(NULL));
    int a = rand()%150+1, b = rand()%150+1, c = rand()%150+1;
    int largest = largest_of_three(a, b, c);

    cout << "Which will be the largest of them all?" 
         << "\na: " << a
         << "\nb: " << b
         << "\nc: " << c
         << endl;

    cout << "That would be: " << largest << endl;

    return 0;
}