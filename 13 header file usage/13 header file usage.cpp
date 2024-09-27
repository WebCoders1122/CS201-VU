#include<iostream>
#include "maths.h"
using namespace std;



int main(){
	int a, b;
	float c;
	// user input
	cout << "Input 1st number: ";
	cin >> a;
	cout << "Input 2nd number: ";
	cin >> b;
	cout << endl;
	
	//add
	c = add(a,b);
	cout << "Addition: ";
	cout << c;
	cout << endl;
	
	//sub
	c = sub(a,b);
	cout << "Subtraction: ";
	cout << c;
	cout << endl;
	
	//mul
	c = mul(a,b);
	cout << "Multiplication: ";
	cout << c;
	cout << endl;
	
	//div
	c = div(a,b);
	cout << "Division: ";
	cout << c;
	cout << endl;
	
	return 0;
}
