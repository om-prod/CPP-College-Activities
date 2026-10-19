#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string item_name[5] = {"Ballpen/s", "Notebook/s", "Pencil/s", "Eraser/s", "Rule/s"};
	double item_cost_array[5] = {10.00, 25.00, 5.00, 8.00, 15.00}, total;
	int item_stock_array[5] = {50, 40, 60, 30, 20};
	int quantity[5];

	cout << "=========================================\n";
	cout << "        LUKE'S INVENTORY SYSTEM\n";
	cout << "=========================================\n";

	int prev_len = 0;
	for(int i = 0; i < size(item_name); i++)
	{
		int curr_len = size(item_name[i]);

		if(prev_len == 0)
		{
			prev_len = curr_len;
		}
		if(curr_len >= prev_len)
		{
			prev_len = curr_len;
		}
	}

	for(int i = 0; i < size(item_name); i++)
	{
		string stuff(prev_len-size(item_name[i]), ' ');
		cout << i+1 << ".";
		cout << item_name[i] << stuff;
		cout << " Stock: " << item_stock_array[i];
		cout << " Price: " << "P" << fixed << setprecision(2) << item_cost_array[i] << endl;
 	}

 	cout << endl;

 	for(int i = 0; i < size(item_name); i++)
 	{
 		string stuff(prev_len-size(item_name[i]), ' ');
 		cout << item_name[i] << stuff << ": ";
 		cin >> quantity[i];

 		if(quantity[i] > item_stock_array[i]) 
 		{
 			cout << "\nThere are only " << item_stock_array[i] << " " 
 				 << item_name[i] << "remaining" << endl;
 			cout << "Skipping this item.." << endl << endl;
 			quantity[i] = 0;
 		}
 		else
 		{
 			total+=item_cost_array[i]*quantity[i];
 			item_stock_array[i]-=quantity[i];
 		}
 	}

 	cout << "\nTOTAL SALES: " << fixed << setprecision(2) << "P" << total << endl;
 	cout << "Remaining: Inventory" << endl;

 	for(int i = 0; i < size(item_name); i++)
 	{
 		string stuff(prev_len-size(item_name[i]), ' ');
 		if(quantity[i] != 0)
 		{
 			cout << item_name[i] << stuff << ": " << item_stock_array[i] << endl;
		}
 		else
 		{
 			cout << item_name[i] << stuff << ": " << item_stock_array[i] << "(UNTOUCHED)" << endl;
 		}
 		
 	}

	return 0;
}