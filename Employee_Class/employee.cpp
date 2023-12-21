#include <iostream>
#include <string>
#include <cstring>
#include<iomanip>
#include "Header.h"
using namespace std;

// Definition of Default Employee Constructor

Employee::Employee()
{
	// copying default values
	strcpy_s(name, "N/A");	
	strcpy_s(ID, "N/A");
	salary = 0;
}

// Definition of Parameterized Employee Constructor

Employee::Employee(char N[20], char id[30], int sal) {

	// copying parameters to data members

	strcpy_s(name, N);
	strcpy_s(ID, id);
	salary = sal;
}
void Employee::setter() {

	cout << "\n Enter Full Name: ";
	cin.getline(name, 20);

	cout << "\n Enter ID number: ";
	cin.getline(ID, 30);

	cout << "\n Enter Salary: ";
	cin >> salary;
}
void Employee::display() {
	
	// Displaying details of Employee
	cout << "\n\n NAME: " << name << endl;
	cout << " ID NUMBER: " << ID << endl;
	cout << " SALARY: $" << salary<<endl;
}
Employee::~Employee()
{
}

// Definition of Default Manager Constructor

Manager::Manager() :Employee() {

	subordinates = 0;
}

// Definition of Parameterized Manager Constructor

Manager::Manager(char N[20], char id[30], int sal, int sub) : Employee(N, id, sal) {

	subordinates = sub;
}
void Manager::setter() {

	Employee::setter();	// calling employee class setter function

	cout << " Enter the number of Subordinates: ";
	cin >> subordinates;
}
void Manager::display() {

	cout << "\n\n Manager Details...";
	Employee::display();		// calling employee class display function

	cout << " NUMBER OF SUBORDINATES: " << subordinates<<endl;
}
// Definition of Default Scientist Constructor

Scientist::Scientist() :Employee(){

	publications = 0;
}
// Definition of Parameterized Scientist Constructor

Scientist::Scientist(char N[20], char id[30], int sal, int pub): Employee(N, id, sal) {

	publications = pub;
}
void Scientist::setter() {

	Employee::setter();		// calling employee class setter function

	cout << " Enter the number of Publications: ";
	cin >> publications;
}
void Scientist::display() {

	cout << "\n\n Scientist Details...";

	Employee::display();	// calling employee class display function

	cout << " NUMBER OF PUBLICATIONS: " << publications << endl;
}
// Definition of Default Laborer Constructor

Laborer::Laborer():Employee(){}

// Definition of Parameterized Laborer Constructor

Laborer::Laborer(char N[20], char id[30], int sal):Employee(N, id, sal){}

void Laborer::display() {
	cout << "\n\n Laborer Details...";

	Employee::display();
}

// Definition of Default Foreman Constructor

foreman::foreman() :Laborer() {

	percent = 0;
}

// Definition of Parameterized Foreman Constructor

foreman::foreman(char N[20], char id[30], int sal, float perc) : Laborer(N, id, sal) {

	percent = perc;
}
void foreman::setter() {

	Employee::setter();		// calling employee class setter function

	cout << " Enter the percentage of Quota, met by Foreman: ";
	cin >> percent;
}
void foreman::display() {

	cout << "\n\n Foreman Details...";

	Employee::display();	// calling employee class display function

	cout << " %AGE OF QUOTA: " << percent << endl;

}