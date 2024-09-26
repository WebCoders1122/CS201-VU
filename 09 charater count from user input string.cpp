#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
main(){
	string input;
	int upper=0, lower=0, digit=0;
//	getting user input
cout << "Write something to count number, uppercase and lowercase letters: ";
getline(cin, input); // to get complete line with spaces
// making loop for calculating
for(int i =0; i < input.length(); i++){
	char ch = input[i];
	if(isupper(ch)) upper++;
	else if (islower(ch)) lower++;
	else if (isdigit(ch))digit++;
}
cout<<endl;
cout << "uppercase: " << upper << endl;
cout << "lowercase: " << lower << endl;
cout << "digits: " << digit << endl;
cout << "total: " << upper+lower+digit << endl;
cout << "string: " << input << endl;
}
