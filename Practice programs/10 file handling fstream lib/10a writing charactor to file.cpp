#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
//	veriable declaration
	ofstream myfile;
	string hello;
//	creating file name output.txt
	myfile.open("output.txt");
	if(!myfile){
		cerr << "Error: Could not open the file for reading!" << endl;
		return 1;
	}
//	getting user input
cout << "Please type something to write in the file: ";
getline(cin, hello);
//	writing string to file
	myfile << hello;
	myfile.close();
	
//	reading file string
	// veriables
	ifstream myfile2("output.txt");
	string hello2;
	//error throwing
	if(!myfile2){
		cerr << "Error: Could not open the file for reading!" << endl;
		return 1;
	}
	//reading file opening
	getline(myfile2, hello2);
	cout << "-" << hello2 <<"." << endl;
	cout<<  "is success written to file.";
	
	myfile2.close();
	
	return 0;
}
