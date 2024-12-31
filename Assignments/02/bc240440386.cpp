//CS201P assignment number 2
#include<iostream>
#include<string.h>
using namespace std;

// to count call of parameterized constructor
int counter = 0;

class Recruitment{
	private:
		//attributes of candidates
		int age, weight;
		float height;
		//for name of candidate
		char name[30];
		// for eligibilty and result
		bool eligibility;
		char *reason[3];
		
	public:
		//Constructors and destructor of class
		Recruitment();
		Recruitment(char [], int, int, float);
		// to check eligibility
		void checkEligibility();
		// to display results
		void display();
		// to display constructor call count
		void ctrDisplay();
};

// defination of constructors and desctructor
	Recruitment::Recruitment(){
		cout << "Name = Habib-ur-Rehman Shakir\n";	
		cout << "VUID = BC240440386\n";	
		cout << "**********************************************\n";	
	};
	Recruitment::Recruitment(char name[], int age, int weight, float height){
		// setting attributes to class instance variables
		this->age = age;
		this->weight = weight;
		this->height = height;
		//setting name with strcpy;
		strcpy(this->name, name);
		// Initialize reason pointers to NULL to avoid using uninitialized pointers
    	for (int i = 0; i < 3; i++) {
        reason[i] = NULL;
    	}
		//for constructor call count
		counter++;
	}
	
	//to check eligibility
		void Recruitment::checkEligibility(){
			eligibility = true;
			if(age < 18 || age > 22){
				eligibility = false;
				reason[0] = new char[50]; // Allocate memory for reason
				if(age < 18){
					strcpy(reason[0], "Age is less than 18. ");
				}else{
					strcpy(reason[0], "Age is greater than 22. ");
				}
				
			}
			if(weight < 52 || weight > 60){
				eligibility = false;
				reason[1] = new char[50]; // Allocate memory for reason
				if(weight < 52){
					strcpy(reason[1], "Weight is Less than required. ");
				}else{
					strcpy(reason[1], "Weight is out of range. ");
				}
			}
			if(height < 5.6){
				eligibility = false;
				reason[2] = new char[50]; // Allocate memory for reason
					strcpy(reason[2], "Height is Less than 5.6 feet. ");
			}
			
		};

	
//to display crieteria, eligibility and results
	void Recruitment::display(){
		cout << "Name of Candidate : " << this->name << endl;
		cout << "Age : " << this->age << " years, ";
		cout << "Weight : " << this->weight << " Kg, ";
		cout << "Height : " << this->height << " feet." << endl;
		// to display result for recruitment and reason for rejection
		if(this->eligibility){
			cout << "Eligible for recruitment\n";
		}else{
			cout << "Not Eligible\n";
			cout << "Reason: ";
			for(int i = 0; i < 3; i++){
				if(reason[i] != NULL)
				cout << reason[i];
			};
			cout << endl;
		}
		cout << "**********************************************\n";
	}
	// to display constructor calls
	void Recruitment::ctrDisplay(){
		cout << "Number of times perematerized constructor called is " << counter << endl;
	}

int main(){
	// this object is calling default constructor
	Recruitment habib;
	// making objects of candidate with parametierized constructor
	Recruitment babar("Babar", 17, 67, 5.7);
	Recruitment rizwan("Rizwan", 21, 59, 5.7);
	Recruitment shan("Shan", 20, 77, 5.8);
	// checking eligibility and displaying result of all 3 candidates
	babar.checkEligibility();
	babar.display();
	rizwan.checkEligibility();
	rizwan.display();
	shan.checkEligibility();
	shan.display();
	// to show how many times constructor is called
	habib.ctrDisplay();
	
	return 0;
}
