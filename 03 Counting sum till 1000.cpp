 // program to give sum of 1000 numbers

#include<iostream>
using namespace std;
int main(){
	int limit, sum;
	limit = 1, sum = 0;
	while(limit <= 1000){
		sum = sum + limit;
		limit++;
	};
	cout << "Sum of 1st 1000 numbers is " << sum;
	return 0;
} 
