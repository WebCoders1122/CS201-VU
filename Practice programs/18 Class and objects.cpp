#include<iostream>
#include<ctime>
using namespace std;
class Time {
	public:
		void display();
		void setmin(int i);
		void sethrs(int i);
		void setsec(int i);
	private:
		int sec, min, hrs;
};

void Time::display(){
	cout << "current time is : ";
	cout << hrs << ":";
	cout << min << ":";
	cout << sec << "\n";
}
void Time::sethrs(int i) {
	hrs = i;
}

void Time::setmin(int i) {
	min = i;
}

void Time::setsec(int i) {
	sec = i;
}

int main(){
	Time t1;
	t1.sethrs(03);
	t1.setmin(52);
	t1.setsec(23);
	t1.display();
	
	cout << "--------------------";
	
	time_t now = time(0);
    tm *t = localtime(&now);
    cout << t << endl;

    cout << "Current time: " << t->tm_hour << ":" << t->tm_min << ":" << t->tm_sec << endl;
	return 0;
}
