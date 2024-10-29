 // program to give sum of odd and even numbers seperately till a given number

#include<iostream>
using namespace std;
int main(){
	int number, tableLimit;
//	taking values from user
cout << "intigiter for which you want to write table: ";
cin >> number;
cout << "Limit of table: ";
cin >> tableLimit;
	cout << "This is Table of " << number << endl;
	for(int i = 1; i <= tableLimit; i++){
		cout << number << " x " << i   << " = " << (number*i) << endl;
	};
	return 0;
} 
