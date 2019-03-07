/***************************************************************
Problem#: Lab Assignment 1
You are to write a program that computes a patient s bill for a hospital stay. 
The different components
of the program are:

Name: Carly Gordon
ID: 
Date: 
Status:	(complete)
Course: COMSC-165-2405

Name: Guillaume de Cannart
ID: 1685028
Date: 03/06/2019
Status:	(complete)
Course: COMSC-165-2405
****************************************************************/

#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

const int DAILY_RATE = 95.99;

class PatientAccount {

public:
	
	string name;
	int age;
	string address;
	int ssn;
	int days, roomCost;
	
	void setInfo() {

		cout << "New patient account. Enter the following information: "
			<< endl;

		string input;
		cout << "name: ";
		getline(cin, input);
		stringstream(input) >> name;

		cout << "age: ";
		getline(cin, input);
		stringstream(input) >> age;

		cout << "address: ";
		getline(cin, input);
		stringstream(input) >> address;

		cout << "SSN: ";
		getline(cin, input);
		stringstream(input) >> ssn;

		cout << endl << "How many days is your expected treatment: ";
		getline(cin, input);
		stringstream(input) >> days;
		roomCost = days * DAILY_RATE;
	}

	//function to print out all content 


	//vector to store surgeries.

	//vector<list> patientSurgeries;
	//vector<list> patientSurgeries;



};


void newPatient(vector<PatientAccount> &patientDB) {
	PatientAccount newPatient;
	newPatient.setInfo();
	patientDB.push_back(newPatient);

}

void startMenu(vector<PatientAccount> &patientDB) {

	string input;
	int selection;

	cout << "Welcome to HospitalAdmin. Select from the following menu: " << endl;
	cout << "1. New User." << endl;
	cout << "2. Print Patient Record." << endl;
	cout << "3. Delete Patient Record." << endl;
	cout << "4. Add surgery billables to patient record." << endl;
	cout << "5. Add pharmacy billables to patient record." << endl;
	cout << endl << "Awaiting input: ";

	getline(cin, input);
	stringstream(input) >> selection;

	switch (selection) {
	case 1:
		newPatient(patientDB);
		break;
	case 2:
		//printRecord();
	case 3:
		//deleteRecord();
		cout << "hi";
	}
}

int main()
{
	string name;
	// create a new patient
	vector<PatientAccount> patientDB;



	//start user menu upon program startup
	/*while (1){
		startMenu(patientDB);
	}
	*/

	startMenu(patientDB);

	//example retrieve from hostpital database

	//name = patientDB.at(0).name;
	//cout << name;

	return 0;
}

