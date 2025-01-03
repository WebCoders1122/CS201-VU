#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int input, output;
	// taking input number
	cout << "\n\n Please Enter the Number: ";
	cin >> input;
	output = input%10;
	cout << "\n " << output << ",";
	input = input/10;
	output = input%10;
	cout << " " << output << ",";
		input = input/10;
	output = input%10;
	cout << " " << output << ",";
		input = input/10;
	output = input%10;
	cout << " " << output << ",";
	getch();
	return 0;
}
