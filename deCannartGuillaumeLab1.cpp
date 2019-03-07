/***************************************************************
Problem#: Lab Assignment 1
You are to write a program that computes a patient's bill for a hospital stay.
The different components
of the program are:

Name: Carly Gordon
ID: 1607043
Date: 03/03/2019
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
#include<iomanip>

using namespace std;

const double DAILY_RATE = 95.99;
const int ADMIN_CODE = 1111;

class Item{
public:
	// atttributes
	string name;
	double price;
	// methods
	string getName(){return name;}
	double getPrice(){return price;}
	void setName(string newName){name = newName;}
	void setPrice(double newPrice){price = newPrice;}
};

class ItemList{
public:
	// attributes
	vector<Item> list;
	// methods
	Item getItem(int index){return list.at(index);}
	// For patient account only
	void setItem(int index, Item updatedItem){
		list.at(index) = updatedItem;
	}
};


// Surgery Menu: Contains all general surgery information
class Surgery: public ItemList{
public:
	// inherits list from ItemList
	// methods
	Item getSurgery(){return getItem();}

	// For patient surgery only
	void setSurgery(int index){
		Item updatedSurgery;

		// ENTER INDEX TO CHANGE CURRECT SURGERY OR ENTER n to add a surgery
		// TODO: ADD FIND SURGERY FUNCTION
		// cout << "Updating Surgery Menu..." << endl
		// <<

		// list.at(index)
		// Add new surgery or update surgery
		if !(list.at(index)){
			list.push_back(updatedSurgery);
		} else {
			list.at()
		}


		// ENTER INDEX TO CHANGE CURRECT SURGERY OR ENTER n to add a surgery
		// TODO: ADD FIND SURGERY FUNCTION
		// cout << "Updating Surgery Menu..." << endl
		// <<

		// list.at(index)
		// Add new surgery or update surgery
		if !(list.at(index)){
			list.push_back(updatedSurgery);
		} else {
			list.at()
		}

		void printSurgeries(){
			cout << "Surgery List" << endl
			<< "~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

			for (int i = 0; i < list.size(); i++){
				cout << "Surgery Item #" << i << endl
				<< "Name: " << list.at(i).name << endl
				<< "Price: " << list.at(i).price << endl << endl;
			}
		};
};

class PatientAccount {

private:
	
	string name;
	int age;
	string address;
	int ssn;
	int days;
	double roomCost;

public:

	void setInfo() {

		cout << endl << "New patient account. Enter the following information: "
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

	string getName() {
		return name;
	}
	//function to print out all content 

	//vector to store surgeries.

	//vector<list> patientSurgeries;
	//vector<list> patientSurgeries;
  
};


//patient selection display
int selectPatient(vector<PatientAccount> patientDB) {
	int patientIndex;
	string input;

	cout << "DVC Hospital Patient List & ID Number" << endl;
	cout << "_____________________________________" << endl;

	for (int i = 1; i <= patientDB.size(); i++) {
		patientDB.at(i).getName();
		cout << i << ": " << setw(4) << patientDB.at(i).getName() << endl;
	}

	cout << "Please select your ID Number: ";
	getline(cin, input);
	stringstream(input) >> patientIndex;

	return patientIndex;
}


//create a new patient
void newPatient(vector<PatientAccount> &patientDB) {
	PatientAccount newPatient;
	newPatient.setInfo();
	patientDB.push_back(newPatient);
}


//remove an element from the patient vector
void removePatient(vector<PatientAccount> &patientDB, int patientIndex) {
	//patientDB.erase(patientIndex);
}


//useless check to make sure users dont delete data
void adminAccess() {

	string input;
	int userCode;
	cout << "Patient removal. Please enter admin code: ";
	getline(cin, input);
	stringstream(input) >> userCode;

	while (userCode != ADMIN_CODE) {
		cout << "Invalid Admin code entered. Try again: ";
	}
}

//Starts teh menu selection
void startMenu(vector<PatientAccount> &patientDB) {

	int patientIndex;
	string input;
	int selection;

	cout << "Welcome to HospitalAdmin. Select from the following menu: " << endl;
	cout << "1. New User." << endl;
	cout << "2. Print Patient Record." << endl;
	cout << "3. Delete Patient Record." << endl;
	cout << "4. Add surgery billables to patient record." << endl;
	cout << "5. Add pharmacy billables to patient record." << endl;
	cout << "...Awaiting input: ";

	getline(cin, input);
	stringstream(input) >> selection;

	switch (selection) {
	case 1:
		newPatient(patientDB);
		break;
	case 2:
		patientIndex = selectPatient(patientDB);
		// print out the patient bill 
		break;
	case 3:
		//remove patient record 
		adminAccess();
		patientIndex = selectPatient(patientDB);
		removePatient(patientDB, patientIndex);

	}
}

int main()
{
	string name, input;
	// create a new patient
	vector<PatientAccount> patientDB;

	while (1) {
    startMenu(patientDB);
	}
	return 0;
}


//
// // Pharmacy Menu: Contains all general surgery information
// class Pharmacy{
// public:
// 	// attributes
// 	vector<Item> list;
// 	// methods
// 	Item getMedication(int index){
// 		return list.at(index);
// 	};
//
// 	// Item setSurgery(int);
//
// };


// int main(){
// 	// create a new patient
// 	string input;
// 	string userName;
// 	double userPrice;
// 	// PatientAccount patient;

// 	ItemList surgeryMenu;
// 	Item surgery;

// 	int listCounter = 0;

// 	// cout << "Assign surgery name: " << endl;
// 	surgery.setName("Name of surgery");
// 	surgery.setPrice(2.00);

// 	// patient.getInfo();

// 	//Add a surgery type and class to surgery class
// 	cout << "Testing..." << endl;
// 	cout << surgery.getName() << " " << surgery.getPrice() << endl << endl;

// 	cout << "Creating Surgery Menu List. Enter Surgeries and enter q to finish: " << endl;

	// do {
	// 	cin >> input;
	// 	cout << endl << "Enter surgery name: ";
	// 	cin >> surgery.name;
	//
	// 	// cout << "name entered is " << userName << endl;
	//
	// 	// surgeryMenu.list.at(listCounter).name = userName;
	//
	// 	cout << endl << "Enter surgery price: ";
	// 	cin >> surgery.price;
	//
	// 	// surgeryMenu.list.at(listCounter).price = userPrice;
	//
	//
	// 	surgeryMenu.list.push_back(surgery);
	//
	// 	cout << "Do you want to continue? ";
	// 	cin >> input;
	//
	// 	listCounter++;
	// } while(input != "q");
	//
	// cout << "Printing Surgery List" << endl;
	// surgeryMenu.printSurgeries();
  return 0;
}

	