#include<iostream>
using namespace std;
int main(){
	int numbers[100];
	int input;
	int i = 0;
	
	do{
		//taking input from user
		cout << "Please enter value # " << i+1 << " :";
		cin >> input;
		if(input == -1){
			break;
		}else{
			numbers[i] = input;
			i++;
		}
	}while(i < 100);
	
	return 0;
}
