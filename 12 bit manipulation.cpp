#include<iostream>
using namespace std;
int main(){
// declration
int num, result;
//taking user input
cout << "Please enter a number: ";
cin >> num;

//left shift
result = num << 2;
cout << "number adfter 2 left shifts: ";
cout << result;
cout << endl;

// right shift
result = num >> 2;
cout << "number adfter 2 right shifts: ";
cout << result;
cout << endl;

// declration for &, |, ~
int a = 6, b=3;

// &
result = a&b;
cout << "Result of a&b: ";
cout << result;
cout << endl;

// |
result = a|b;
cout << "Result of a&b: ";
cout << result;
cout << endl;

// ~
result = ~a;
cout << "Result of ~a: ";
cout << result;
cout << endl;


	return 0;
}
