#include<iostream>
#include <ctype.h>
#include<stdio.h>
using namespace std;
main(){
	char str;
//	int length = strlen(str1);
	int upper=0, lower=0, digit=0;
//	getting user input
while((str=getchar()) != '\n'){
	if(isupper(str))
	upper++;
	else if (islower(str))
	lower++;
	else if (isdigit(str))
	digit++;
}
//	for loop for extracting earch type of characters
//for(i=0;i<length; i++){
//	if(isupper(str1[i]) == 2){
//		upper++;
//		continue;
//	}else if(islower(str1[i]) == 2){
//		lower++;
//		continue;
//	}else if(isdigit(str1[i]) == 2){
//		digit++;
//		continue;
//	}
//}
cout<<endl;
cout << "uppercase: " << upper << endl;
cout << "lowercase: " << lower << endl;
cout << "digits: " << digit << endl;
cout << "total: " << upper+lower+digit << endl;
}
