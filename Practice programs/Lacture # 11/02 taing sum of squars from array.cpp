#include<iostream>
using namespace std;
int main(){
	int numbers[10];
	int input;
	int sum_of_squars = 0;
	int i = 0;
	
	do{
		//taking input from user
		cout << "Please enter value # " << i+1 << " :";
		cin >> input;
			numbers[i] = input;
			sum_of_squars += input*input;
			i++;
		
	}while(i < 3);
	
	cout << "\n some of squars of array is " << sum_of_squars;
	return 0;
}
