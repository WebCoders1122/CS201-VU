#include<iostream>
using namespace std;
int main(){
	int arr[] = {12,132,11,255,23,5,32,22,4,5};
	int *ptr;
	ptr = arr;
	
	cout << (ptr+5) << endl;
	cout << *(ptr+5) << endl;
	
	return 0;
}
