#include<iostream>
#include<cctype>
using namespace std;
void toUpperCase(char *str){
	while(*str != '\0'){
		if(islower(*str)){
			*str = toupper(*str);
		}
	str++;
	}
}
int main(){
	char str[40];
	//taking user input
	cout << "please input a string of 0-40 characters: ";
	cin.getline(str, 40);
	// converting to uppercase
	toUpperCase(str);
	//display uppercase string
	cout << str;
	return 0;
}
