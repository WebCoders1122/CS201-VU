#include<iostream>
using namespace std;
int main(){
	char arr1[40] = "he is greate";
	char arr2[40];
	
	char *ptr1;
	char *ptr2;
	
	ptr1 = arr1;
	ptr2 = arr2;
	
	while(*ptr1 != '\0'){
		*ptr2 = *ptr1;
	}
	
//	for(int i=0;i<40;i++){
//		if(arr1[i] == '\0'){
//			break;
//		}
//		arr2[i] = arr1[i];
//	}
	
	cout << arr1 << endl;
//	cout << arr2 << endl;
	
	return 0;
}
