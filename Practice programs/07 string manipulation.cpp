#include<iostream>
#include<string.h>
using namespace std;
main(){
	char str1[30]= "welcome to ";
	char str2[30]= "school.";
	char str3[30]= "";
	
//	printing string initially
cout << "string 1: " << str1 << endl;
cout << "string 2: " << str2 << endl;
cout << "string 3: " << str3 << endl;
//string manipulation
cout << "copy string 2 in 1: " << strcpy(str2, str1) << endl; // it copies and overwrites the charactes while copying..
cout << "length: " << strlen(str1) << endl;
cout << "copy string 1 to 3, 6 characters: " << strncat(str3, str1, 6) << endl;
}
