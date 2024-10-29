#include<iostream>
using namespace std;
int main(){
//	declaring structure
	struct student {
char name[40];
char degree[20];
char uni[50];
float cgpa;		
	};
//	making structue variable
student coder = {
	"web coders",
	"BSCS",
	"Virtual University",
	3.8,
};
// printing values
cout << "Details of Coder are as follows: " << endl;

cout << "Name of Student : ";
cout << coder.name;
cout << endl;

cout << "Degree of Student : ";
cout << coder.degree;
cout << endl;

cout << "University of Student : ";
cout << coder.uni;
cout << endl;

cout << "CGPA of Student : ";
cout << coder.cgpa;
cout << endl;

	
	return 0;
}
