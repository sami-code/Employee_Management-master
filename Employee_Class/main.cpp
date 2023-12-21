#include<iostream>
#include<cstring>
#include "Header.h"
using namespace std;
int main() {
	// Testing Main
	char name[20] = "Ehmad Saeed";
	char id[30] = "12345-7891011-2";

	// calling Employee class Functions

	Employee man(name, id, 1000);
	man.display();
	man.setter();
	man.display();

	// calling Manager class Functions

	Manager M(name, id, 1000, 14);
	M.display();

	// calling Scientist class Functions

	Scientist S(name, id, 1000, 13);
	S.display();

	// calling Laborer class Functions

	Laborer L(name, id, 1000);
	L.display();

	// calling Foreman class Functions

	foreman F(name, id, 1000, 16);
	F.display();

	system("pause");
	return 0;
}
