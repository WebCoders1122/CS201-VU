#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float radius, area, circum, dia;
	// taking input number
	cout << "\n\n Please Enter the Radius: ";
	cin >> radius;
	// calculating area
	area = 3.14 * radius *radius;
	circum = 2 * 3.14 * radius;
	dia = 2* radius;
	//display all values
	cout << "\n\n Area of circle is : " << area;
	cout << "\n\n Circumference of circle is : " << circum;
	cout << "\n\n Diameter of circle is : " << dia;
	getch();
	return 0;
}
