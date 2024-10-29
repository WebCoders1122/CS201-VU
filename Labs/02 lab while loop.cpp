// CS201P - Lab 2
#include<iostream>
using namespace std;

int main(){
	// initializing veriables
	int age, total_age, average_age;
	//veriable for loop
	int i = 1;
	//taking user input as instructed in lab
	while(i <= 10){
		cout << "\n Enter the Age of Student # " << i << " : ";
		cin >> age;
		total_age += age;
		i++;
	}
	// calculating average age and displaying on screen
	average_age = total_age/10;
	cout << "\n\n Total age of All students is : " << total_age ;
	cout << "\n Average age of All students is : " << average_age ;
	return 0;
}
