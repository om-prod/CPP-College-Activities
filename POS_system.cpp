#include <iostream>
#include <iomanip>

using std::cout, 
      std::cin, 
      std::string, 
      std::fixed,
      std::setprecision;

int main()
{
	double bread =  35.00, 
	       soft_drinks =  25.00, 
	       canned_goods =  50.00, 
	       noodles =  20.00, 
	       milk =  80.00,
	       cash, discount, sub_total, 
	       total_due, price;
	string customer_name, product;
	int quantity;

	cout << "================================\n";
	cout << "ABC STORE!";
	cout << "\n================================\n";

	cout << "Customer: ";
	getline(cin, customer_name);

	cout << "Product: ";
	cin >> product;

	if(product == "Bread"){ 
		price = bread;
	}
	else if(product == "Soft Drinks"){
		price = soft_drinks;
	}
	else if(product == "Canned Goods"){
		price = canned_goods;
	}
	else if(product ==  "Noodles"){
		price = noodles;
	}
	else if(product ==  "Milk"){
		price = milk;
	}
	else{
		price = -1;
	}

	if(price > 0){
		cout << "Quantity: ";
		cin >> quantity;
		
		cout << "Price: P" << fixed << setprecision(2) << price; 
		
		sub_total = price * quantity;
		
		if(sub_total >= 500){
			discount = sub_total * .20;
		}
		else if(sub_total >= 300){
			discount = sub_total * .10;
		}
		else if(sub_total >= 100){
			discount = sub_total * .05;
		}
	
		total_due = sub_total-discount;
		
		cout << "\n\nSubtotal: P" << fixed << setprecision(2) << sub_total;
		cout << "\nDiscount: P" << fixed << setprecision(2) << discount;
		cout << "\nTotal Due: P" << fixed << setprecision(2) << total_due;
		
		cout << "\n\nCash: P";
		cin >> cash;

		cash -= total_due;
		cout << "Change: P" << fixed << setprecision(2) << cash;

		cout << "\n================================\n";
		cout << "Thank You For Shopping!";
		cout << "\n================================\n";
	}
	else{
		cout << "\nIncorrect Product Name!\n";
	}
}
