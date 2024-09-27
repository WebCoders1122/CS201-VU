#include<iostream>
#include<fstream>
using namespace std;
main(){
	ofstream myfile;
	string text;
//	reading and saving file contents in to myfile veriable
	myfile.open("file.txt");
//	writing myfile veriable contents to text veriable
	myfile.put('1');
//	printing
	cout << text;
//	closing file
	myfile.close();
	
}
