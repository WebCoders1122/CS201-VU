 // program to compare ages of two person

#include<iostream>
using namespace std;
int main(){
	int aslamAge, akramAge;
	cout << "Please input Aslam age = ";
	cin >> aslamAge;
	cout << "Please input Akram age = ";
	cin >> akramAge;
	if (aslamAge > akramAge){
			cout << "Aslam is older than Akram" << endl;
	}else{
			cout << "Akram is older than Aslam" << endl;
	}
	return 0;
}
