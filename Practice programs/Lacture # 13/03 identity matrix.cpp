#include<iostream>
using namespace std;


bool isUnitMatrix(int matrix[][5], int n){
	for(int row = 0; row < n; row++){
		for(int col = 0; col < n; col++){
			if(row == col && matrix[row][col] != 1){
				return false;
			}else if(row != col && matrix[row][col] != 0) {
				return false;
			}
		
		}
	}
	return true;
}
int main(){
	int n; //size of matrix
	cout << "Please enter size of squar matrix: ";
	cin >> n;
	int matrix[5][5];
	cout << "Please enter matrix values 1 by 1: ";
	//getting values from user
	for(int row = 0; row < n; row++){
		for(int col = 0; col < n; col++){
			cin >> matrix[row][col];
		}
	}
	//checking for unit matrix
	if(isUnitMatrix(matrix, n)){
		cout << "\nthis is unit matrix";
	}else{
		cout << "\nthis is not unit matrix";
	}

	return 0;
}
