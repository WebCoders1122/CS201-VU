#include<iostream>
using namespace std;
int main(){
	int array[10] = {1, 4, 3, 2, 6, 7, 9, 8, 5, 0}, temp;	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(array[j] > array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	for(int i=0; i<10; i++){
		cout << array[i] << "\t";
	}
	return 0;
}
