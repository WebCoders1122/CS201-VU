#include<iostream>
#include<string.h>
using namespace std;

class Date {
	public:
		void display();
		void setday(int i);
		void setmonth(int i);
		void setyear(int i);
		int getday();
		int getmonth();
		int getyear();
//		constructer
Date();
Date(int, int, int);
// destructor
~Date();
	private:
		int day, month, year;
};
Date::Date(){
	day = 01;
	month = 01;
	year = 1991;
	cout << "default constructor called \n";
}
Date::Date(int theday, int themonth, int theyear){
	day = theday;
	month = themonth;
	year = theyear;
	cout << "2nd constructor called \n";
}
Date::~Date(){
	cout << "destructor Called \n";
}
void Date::display(){
	cout << "current date is : ";
	cout << day << "-";
	cout << month << "-";
	cout << year << "\n";
}

void Date::setday(int theday){
	day = theday;
}

void Date::setmonth(int themonth){
	month = themonth;
}
void Date::setyear(int theyear){
	year = theyear;
}

int Date::getyear(){
	return year;
}

int Date::getmonth(){
	return month;
}

int Date::getday(){
	return day;
}


int main(){
	Date d1(02, 02, 1992);
	d1.display();
	
	d1.setday(12);
	d1.setmonth(12);
	d1.setyear(1992);
	
	d1.display();	
	
	cout << d1.getday()<<d1.getmonth()<<d1.getyear();
	return 0;
}
