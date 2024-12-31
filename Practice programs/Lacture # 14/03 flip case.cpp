#include<iostream>
#include<ctype.h>
using namespace std;
void toFlipCase(char *str){
	while(*str != '\0'){
		if(islower(*str)){
			*str = toupper(*str);
		}else if(isupper(*str)){
			*str = tolower(*str);
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
	toFlipCase(str);
	//display uppercase string
	cout << str;
	return 0;
}
