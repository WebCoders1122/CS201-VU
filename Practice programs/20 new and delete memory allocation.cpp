#include<iostream>
using namespace std;

int main(){
	int i, stud_cnt, total, average, *ptr, *ptr2;

//	user input
cout << "enter # of students: ";
cin >> stud_cnt;

// allocating memory;
ptr = new int(stud_cnt);

// taking ages from user
total = 0;
for(i=1; i<=stud_cnt; i++){	
	cout << "enter # age of student " << i << " :";
	cin >> *ptr;
	total = total+*ptr;
	ptr++;
}
average = total/stud_cnt;
cout << "average = " << average;
delete(ptr)
	return 0;
}
