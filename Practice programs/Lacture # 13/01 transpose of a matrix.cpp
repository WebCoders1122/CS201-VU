#include<iostream>
using namespace std;
int main(){
	int number[3][3], temp;	
	cout << "Please enter matrix values 1 by 1: ";
	//getting values from user
	for(int row = 0; row < 3; row++){
		for(int col = 0; col < 3; col++){
			cin >> number[row][col];
		}
	}
	//display before transpose
		for(int row = 0; row < 3; row++){
		for(int col = 0; col < 3; col++){
			cout << "\t" << number[row][col];
		}
		cout << endl;
	}
	// transpose 
	for(int row = 0; row < 3; row++){
		for(int col = row; col < 3; col++){
			temp = number[row][col];
			number[row][col] = number[col][row];
			number[col][row] = temp;
		}
	}
	
	// displaying transposed matrix
		// transpose 
				cout << endl;
				cout << endl;
				cout << endl;
	for(int row = 0; row < 3; row++){
		for(int col = 0; col < 3; col++){
			cout << "\t" << number[row][col];
		}
		cout << endl;
	}
	
	return 0;
}
