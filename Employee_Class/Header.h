// Header File

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class Employee
{

public:
	// Constructors & Prototypes of Data Functions
	Employee();	// Default Constructor
	Employee(char N[20], char id[30], int sal);	//Parameterized Constrcutor
	void setter();
	void display();
	~Employee();

private:
	char name[20], ID[30];
	int salary;
};
class Manager : protected Employee {

public:
	// Constructors & Prototypes of Data Functions
	Manager();	// Default Constructor
	Manager(char N[20], char id[30], int sal, int sub);	//Parameterized Constrcutor
	void setter();
	void display();

private:
	int subordinates;
};
class Scientist : protected Employee {

public:
	// Constructors & Prototypes of Data Functions
	Scientist();	// Default Constructor
	Scientist(char N[20], char id[30], int sal, int pub);	//Parameterized Constrcutor
	void setter();
	void display();

private:
	int publications;
};
class Laborer : protected Employee {

public:
	// Constructors & Prototypes of Data Functions
	Laborer();	// Default Constructor
	Laborer(char N[20], char id[30], int sal);	//Parameterized Constrcutor
	void display();
};
class foreman : protected Laborer {
		
public:
	// Constructors & Prototypes of Data Functions
	foreman();	// Default Constructor
	foreman(char N[20], char id[30], int sal, float perc);	//Parameterized Constrcutor
	void setter();
	void display();

private:
	float percent;
};