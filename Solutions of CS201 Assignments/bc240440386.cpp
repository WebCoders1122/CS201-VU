//CS-201 assignment number 1
#include<iostream>
using namespace std;

//function to check leap year
bool checkLeapYear(int year){
	if(year%4 == 0 && year%100 != 0 || year%400 == 0){
		cout << "The Year " << year <<" is a leap year." << endl;
		return 1;
	}else{
		cout << "The Year " << year <<" is not a leap year." << endl;
		return 0;
	}
}

int main(){
	//veriable declaration
	int studentID = 240440386;
	int year;
	bool isLeapYear;
	int month;
	
	// displaying name and ID
	cout << "Habib ur Rehman Shakir" << endl;
	cout << "BC" << studentID << endl;
	
	//calculating year from studentID
	year = studentID/100; // dropping last 2 digits as int dont show values after point
	year = year%10000; // modulus will give us desired 4 degits
	
	// checking for leap year
	isLeapYear = checkLeapYear(year);

	//print months as per user input with help of switch statement
do{
	cout << "Enter the month (1 - 12) or -1 to stop: ";
	cin >> month;
	switch(month){
		case 1:
			cout << "Month 1: January has 31 days." << endl;
			break;
		case 2:
			if(isLeapYear){
				cout << "Month 2: February has 29 days." << endl;
			}else {
				cout << "Month 2: February has 28 days." << endl;
			}
			break;
		case 3:
			cout << "Month 3: March has 31 days." << endl;
			break;
		case 4:
			cout << "Month 4: April has 30 days." << endl;
			break;
		case 5:
			cout << "Month 5: May has 31 days." << endl;
			break;
		case 6:
			cout << "Month 6: June has 30 days." << endl;
			break;
		case 7:
			cout << "Month 7: July has 31 days." << endl;
			break;
		case 8:
			cout << "Month 8: August has 31 days." << endl;
			break;
		case 9:
			cout << "Month 9: September has 30 days." << endl;
			break;
		case 10:
			cout << "Month 10: October has 31 days." << endl;
			break;
		case 11:
			cout << "Month 11: November has 30 days." << endl;
			break;
		case 12:
			cout << "Month 12: December has 31 days." << endl;
			break;
		case -1:
			//added this to prevent default statement from executing while exiting program
			break;
		default:
			cout << "Invalid month!" << endl;
			break;
	}
}while(month != -1);
	return 0;
}
