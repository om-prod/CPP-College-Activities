#include <iostream>
using namespace std;

int main(){
	double depositedAmount, balance = 650.0;
	
	cout << "===== ATM-DEPOSIT-TERMINAL =====\n";
	cout << "Balance: " << balance << "PHP";
	
	cout << "\n\nEnter Deposit Amount: ";
	cin >> depositedAmount;

	balance = depositedAmount + balance;
	
	cout << "Deposited Amount: " << depositedAmount;
	cout << "\nNew Balance Amount: " << balance << "PHP";
	cout << "\n======= ATM-DEPOSIT-ENDED =======\n";
	return 0;
}

