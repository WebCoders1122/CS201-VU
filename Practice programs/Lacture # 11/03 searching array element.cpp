#include<iostream>
using namespace std;
int main(){
	int numbers[100];
	int input;
	int found = 0;
	
	// loop to initialize array elements
	for(int i=0; i<100; i++){
		numbers[i] = i+1;
	}
	
	cout << "Enter number 1-100 to search: ";
	cin >> input;
	
	//loop to search the nunber
	for(int i=0; i<100; i++){
		if(numbers[i] == input){
			found = numbers[i];
			break;
		}
		continue;
	}
	
	if(found > 0) {
			cout << "\n number is found at index " << found;
	}else{
					cout << "number does not exists in array";

	}
	
	return 0;
}
