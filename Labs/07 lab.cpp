// CS201P - Lab 7 -- Structures
#include<iostream>
#include<string.h>
using namespace std;

	// declaring structure
	struct Numbers{
		int num1;
		float num2;
	};
	
	// function that take data members as arguments and return struture data type
	Numbers add(Numbers a, Numbers b){
		// creating 3rd data member to add both numbers
		Numbers n3;
		n3.num1 = a.num1 + b.num1;
		n3.num2 = a.num2 + b.num2;
		return n3;
	};
	
int main(){
	// making two data members and assigning values in different way
	Numbers n1, n2;
	n1.num1 = 0;
	n1.num2 = 0.0;
	n2 = {0, 0.0};
	// taking users values for both data members of functions
	cout << "Please Input values for int 1: ";
	cin >> n1.num1;
	cout << "Please Input values for float 1: ";
	cin >> n1.num2;
	cout << "Please Input values for int 2: ";
	cin >> n2.num1;
	cout << "Please Input values for float 2: ";
	cin >> n2.num2;
	
	// calling the function
	Numbers n3 = add(n1, n2);
	
	// displaying values on screen
	cout << "Sum of ints is " << n3.num1 << endl;
	cout << "Sum of floats is " << n3.num2 << endl;
	system("pause");
	return 0;
}

