 // program to give sum of odd and even numbers seperately till a given number

#include<iostream>
using namespace std;
int main(){
	char character;
	int tries;
	cout << "Please guess character from a to z within 10 tries." << endl;
	do{
		cout << "Please Enter Charater: ";
		cin >> character;
		if(character == 'q'){
			cout << "Congratulation! You have guessed Correctly." << endl;
			tries = 10;
		}else{
			tries = tries + 1;
			if(tries == 10){
				cout << "Tries finished. Game over" << endl;
			}else {
				cout << "Wrong Guess, " << (10-tries) << " tries left." <<endl;
			}
			
		};
	}while(tries < 10);
	return 0;
} 
