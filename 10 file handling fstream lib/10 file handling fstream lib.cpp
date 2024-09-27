#include<iostream>
#include<fstream>
using namespace std;
main(){
	ifstream myfile;
	string text;
//	reading and saving file contents in to myfile veriable
	myfile.open("file.txt");
//	writing myfile veriable contents to text veriable
	myfile >> text;
//	printing
	cout << text;
//	closing file
	myfile.close();
	
}
