#include<iostream>

using namespace std;

class Info {
	public:
		void display(){
			cout << "number is " << number << endl;
		}
//	constructor
Info();
// friend
friend void frndfn(Info*, int);
	private:
		int number;
};

// constructor
Info::Info(){
	number = 100;
}

void frndfn(Info*ptr, int num){
	ptr->number = num;
}

int main (){
	
	Info x;
	x.display();
	frndfn(&x, 121);
	x.display()
;	
	return 0;
}
