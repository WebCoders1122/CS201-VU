 // program to give discounts on different rates

#include<iostream>
using namespace std;
int main(){
	float bill, discountedBill;
	cout << "Please Enter your bill = ";
	cin >> bill;
	if (bill > 20000){
		discountedBill = bill - (bill * 0.2);
			cout << "You final bill after 20% discount is " << discountedBill << endl;
	}else	if (bill > 15000 && bill < 20000){
		discountedBill = bill - (bill * 0.15);
			cout << "You final bill after 15% discount is " << discountedBill<< endl;
	}else if (bill > 5000 && bill < 15000){
		discountedBill = bill - (bill * 5/100);
			cout << "You final bill after 5% discount is " << discountedBill<< endl;
	}else{
			cout << "You final bill after 0% discount is " << bill << endl;
	}
	return 0;
}
