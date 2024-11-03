//CS201P assignment number 1
#include<iostream>
using namespace std;

int main(){
	//printing My name and id at the top
	cout << "Student ID: BC240440386 \n";
	cout << "Student Name: Habib ur Rehman Shakir \n";
	
	//veriable declaration
	int marks[3];
	double total_marks = 0.0;
	double average;
	double marks_input;
	int highest_marks;
	int lowest_marks;
	char grade;

	//taking marks from user with for loop
	for(int i = 0; i <=2; i++){
		cout << "Enter the marks for subject " << i+1 <<" : ";
		cin >> marks_input;
		//to prevent marks above 100
		while(marks_input > 100 || marks_input < 0) {
		cout << "Invalid Value. Please enter between 0 - 100 \n";
		cout << "Enter the marks for subject " << i+1 <<" : ";
		cin >> marks_input;
		}
		marks[i] = marks_input;
		total_marks += marks_input;
	};
	
	//calculation for required results
	// average
	average = total_marks/3.0;
	//printing grades
	if(average >= 90){
		grade = 'A';
	}else if(average >= 80 && average < 90){
		grade = 'B';
	} else if(average >= 70 && average < 80){
		grade = 'C';
	} else if(average >= 60 && average < 70){
		grade = 'D';
	}else {
		grade = 'F';
	}
		//printing highest marks
	if(marks[0] > marks[1] && marks[0] > marks[2]){
		highest_marks = marks[0];
	}else if (marks[1] > marks[2]){
		highest_marks =  marks[1];
	}else {
		highest_marks =  marks[2];
	}
	//printing lowest marks
	if(marks[0] < marks[1] && marks[0] < marks[2]){
		lowest_marks = marks[0];
	}else if (marks[1] < marks[2]){
		lowest_marks = marks[1];
	}else {
		lowest_marks = marks[2];
	}
	
	// printing result at screen after marks input
	cout << "\nMarks have been entered. Here is your result.";
	cout << "\nObtained marks out of 300 : " << total_marks;
	cout << "\nAverage marks : " << average;
	cout << "\nGrade: " << grade;
	cout << "\nHighest Marks: " << highest_marks;
	cout << "\nLowest Marks: " << lowest_marks;
	return 0;
}
