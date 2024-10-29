 // program to give sum of odd and even numbers seperately till a given number

#include<iostream>
using namespace std;
int main(){
	int inputNumber, sumOdd, sumEven, startLimit;
	sumOdd = 0, sumEven = 0, startLimit=1;
	cout << "Please Enter number to get sum of odd and even: ";
	cin >> inputNumber;
	while(startLimit <= inputNumber){
		if(startLimit%2 == 0){
			sumEven = sumEven + startLimit;
		}else{
			sumOdd = sumOdd + startLimit;
		}
		startLimit++;
	}
	cout << "Sum of Odd numbers is " << sumOdd << " and even numbers is " << sumEven;
	return 0;
} 
