#include<iostream>
using namespace std;
int main(){
	int x, y, *ptr1, *ptr2;
	//taking input fron user
	cout << "\nPlease enter number 1: ";
	cin >> x;
	cout << "\nPlease enter number 2: ";
	cin >> y;
	
	ptr1 = &x;
	ptr2 = &y;
	
	if(*ptr1 > *ptr2){
		cout << "\nNumber 1 is greater than number 2";
	}else{
			cout << "\nNumber 2 is greater than number 1";
	}
	return 0;
}
