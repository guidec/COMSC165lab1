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

using namespace std;

class PatientAccount {

	//patient information
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

class Surgery {
	

};

class Pharmacy {

};

int main()
{

	// create a new patient
	string input;
	PatientAccount patient;
	patient.getInfo();

	//Add a surgery type and class to surgery class 



	return 0;
}

