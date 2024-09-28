#include<iostream>
#include <stdlib.h>
using namespace std;

//structure for employees
struct Employee {
	char name[50];
	int id;
};
int main(){
// declration
int worker_count;
Employee *worker, *ptr;

//taking user input
cout << "Please number of employees: ";
cin >> worker_count;
worker = (Employee *) calloc(worker_count, sizeof(Employee)); // allocation of memory to ptr
if(worker == NULL){
	cout << "Error Occured while allocating memory.";
	return 1;
}
cout << "\n Memory allocated successfully. \n";
cout << "worker pointer : " << worker ;
free(worker);
	return 0;
}
