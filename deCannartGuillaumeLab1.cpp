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
Date: 02/17/2019
Status:	(complete)
Course: COMSC-165-2405
****************************************************************/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

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


int main(){
	// create a new patient
	string input;
	string userName;
	double userPrice;
	// PatientAccount patient;

	ItemList surgeryMenu;
	Item surgery;

	int listCounter = 0;

	// cout << "Assign surgery name: " << endl;
	surgery.setName("Name of surgery");
	surgery.setPrice(2.00);

	// patient.getInfo();

	//Add a surgery type and class to surgery class
	cout << "Testing..." << endl;
	cout << surgery.getName() << " " << surgery.getPrice() << endl << endl;

	cout << "Creating Surgery Menu List. Enter Surgeries and enter q to finish: " << endl;

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
