#include<iostream>
using namespace std;
#define PI 3.1496 // this is macro
int main(){
// declration
float radius, dia, cir, area;
//taking user input
cout << "Please enter radius: ";
cin >> radius;

//Dia
dia = radius * 2;
cout << "Diameter: ";
cout << dia;
cout << endl;

//cir
cir = radius * 2 * PI;
cout << "Circumference: ";
cout << cir;
cout << endl;

//area
area = radius * radius * PI;
cout << "Area: ";
cout << area;
cout << endl;

cout << PI;

	return 0;
}
