//Main.CPP
#include<iostream>
#include<string>

using namespace std;


#include "Customer.h"
#include "CustomerManager.h"




void LoginMenu();
void Register();
void Login();
void MainMenu();
void AddPoint();
void CheckWallet();
void ClaimPrize();


int main() {
	LoginMenu();
	return 0;
}


void LoginMenu() {
	int choice = 0;
	while (choice != 3) {
		cout << "\t\t----------------------------------------" << endl;
		cout << "\t\tWelcome to Supermarket Membership System" << endl;
		cout << "\t\t----------------------------------------" << endl;
		cout << "1. Register" << endl;
		cout << "2. Login" << endl;
		cout << "3. Exit" << endl;
		cout << "Enter your selection: " << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			Register();
			break;
		case 2:
			Login();
			break;

		case 3:
			cout<<"Thanks for using our bank managemnt system"<<endl;
			break;
		default:
			cout << "Error!!! Please enter a valid choice";
			LoginMenu();
		}
	}
}


void Register() {
	Customer* customer = new Customer();
	CustomerManager customerManager;
	cout << "Please Enter customer details " << endl;
	cout << "Member ID:\t";
	cin >> customer->memberID;
	cout << "Name: \t";
	cin.ignore(1, '\n');
	getline(cin, customer->name);
	cout << "Password: \t";
	getline(cin, customer->password);
	int status = customerManager.insertCustomer(customer);
	if (status != 0)
		cout << "Successfully added a new member." << endl;
	else
		cout << "Failed to add a new member" << endl;
}

void Login() {
	system("cls");
	cout << "---------------------------" << endl;
	cout << "------------Login----------" << endl;
	cout << "---------------------------" << endl;
	MainMenu();
}

void MainMenu() {
	system("cls");
	int choice = 0;
	cout << "------------------------------" << endl;
	cout << "----------Main Menu-----------" << endl;
	cout << "------------------------------" << endl;
	cout << "------1. Add Wallet Point-----" << endl;
	cout << "------2. Check Reward Point---" << endl;
	cout << "------3. Claim Prize----------" << endl;
	cout << "Enter a digit: " << endl;
	cin >> choice;
	while (choice != 4) {
		switch (choice) {
		case 1:
			AddPoint();;
			break;
		case 2:
			CheckWallet();
			break;
		case 3:
			ClaimPrize;
			break;
		}
	}
}

void AddPoint() {
}

void CheckWallet() {
}

void ClaimPrize() {
}