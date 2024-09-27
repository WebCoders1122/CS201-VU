#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
// declration
int i, studentCount, average, total, *ptr, *sptr;

//taking user input
cout << "Please number of students: ";
cin >> studentCount;
ptr = (int*) calloc(studentCount, sizeof(int)); // allocation of memory to ptr
if(ptr == NULL){
	cout << "Error Occured while allocating memory.";
	return 1;
}
// setting ptr value to sptr for usage in program
sptr = ptr;
// taking input for marks of each student
total = 0;
for(i=1; i<=studentCount; i++){
	cout << "please enter marks of student " << i << " : "; 
	cin >> *sptr;
	total = total + *sptr;
	sptr++;	
}
average = total/studentCount;
cout << "Avarage marks of student is " << average;
free(ptr);
	return 0;
}
