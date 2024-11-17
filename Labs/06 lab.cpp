// CS201P - Lab 6 -- multidimentional arrays
#include<iostream>
#include<string.h>
using namespace std;

//global variable
	const int arraySize = 4;

//taking user input prototype
void takeInput(int array[][arraySize]);
//display prototype
void displayMatrix(int array[][arraySize]);
//transpose prototype
void transposeMatrix(int array[][arraySize]);

int main(){
	// initializing veriables

	int array[arraySize][arraySize];
	
	//taking input from user
	takeInput(array);
	
	//displaying matrix on the screen
	displayMatrix(array);
	
	//transpose matrix
	transposeMatrix(array);
	
	//display after transpose
	cout << endl << endl;
	displayMatrix(array);
	
	return 0;
}

//taking user input function
void takeInput(int array[][arraySize]){
	cout << "Please enter the 4 x 4 matrix values one by one: ";
	int input;
	for(int row=0; row<arraySize; row++){
		for(int col=0; col<arraySize; col++){
			cin >> input;
			array[row][col] = input;
		}	
	}
}
// display matrix
void displayMatrix(int array[][arraySize]){
	for(int row=0; row<arraySize; row++){
		for(int col=0; col<arraySize; col++){
			cout<< "\t" << array[row][col];
		}
		cout << endl;	
	}
}

// transpose matrix
void transposeMatrix(int array[][arraySize]){
	int temp;
	for(int row=0; row<arraySize; row++){
		for(int col=row; col<arraySize; col++){
			temp = array[row][col];
			array[row][col] = array[col][row];
			array[col][row] = temp;
		}	
	}
}

