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
Date: 02/17/2019
Status:	(complete)
Course: COMSC-165-2405
****************************************************************/

#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

class PatientAccount {

public:
	
	string name;
	int age;
	string address;
	int ssn;
	
	void getInfo() {

		cout << "New patient account. Enter the following information: " << endl;

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
	}

	double surgeries;
	double pharmacy;
	int numDays;
};


void startUser(vector<PatientAccount> PatientDB) {
	PatientAccount newUser;
	newUser.getInfo();
}

void startMenu(vector<PatientAccount> PatientDB) {

	string input;
	int selection;

	cout << "Welcome to HospitalAdmin. Select from the following menu: " << endl;
	cout << "1. New User" << endl;
	cout << "2. Print Patient Record." << endl;
	cout << "3. Delete Patient Record." << endl;
	cout << "4. Add surgery billables to patient record." << endl;
	cout << "5. Add pharmacy billables to patient record." << endl;
	cout << endl << "Awaiting input: ";

	getline(cin, input);
	stringstream(input) >> selection;

	switch (selection) {
	case 1:
		startUser(PatientDB);
	case 2:
		//printRecord();
	case 3:
		//deleteRecord();
		cout << "hi";
	}
}

int main()
{
	// create a new patient
	vector<PatientAccount> PatientDB;

	startMenu(PatientDB);


	return 0;
}

