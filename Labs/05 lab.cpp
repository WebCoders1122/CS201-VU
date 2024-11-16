// CS201P - Lab 5
#include<iostream>
#include<string.h>
using namespace std;

//prototype of compare function
void compareString(char *, char *, int);

int main(){
	// initializing veriables
	char firstArray[30], secondArray[30];
	
	//taking input from user
	cout << "Please Enter String 1 : ";
	cin.getline(firstArray, 30);
	cout << "\nPlease Enter String 2 : ";
	cin.getline(secondArray, 30);
	
	//comparing strings
	if(strlen(firstArray) == strlen(secondArray)){
		compareString(firstArray, secondArray, strlen(firstArray));
	}else{
		cout << "\n\nSize of both Arrays is not same";
	};
	return 0;
}

//comparestring defination
void compareString(char *array1, char *array2, int size){
	int flag = 0, i = 0;
	while(i < size){
		if(array1[i] != array2[i]){
			flag = 1;
			break;
		};
		i++;
	};
	if(flag == 1){
		cout << "\n\nBoth Arrays are not same";
	}else{
		cout << "\n\nBoth Arrays are same";
	}
}
