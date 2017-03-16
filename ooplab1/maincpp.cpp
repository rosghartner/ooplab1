#include <iostream>
#include "person.h"

using namespace std;



int main()
{
	person* humans;
	humans = new person[];

	string lastname, firstname, secondname, adress, gender, year, telephone, weight, height;
	cout << "enter lastname: ";
	getline(cin, lastname);
	cout << "enter firstname: ";
	getline(cin, firstname);
	cout << "enter secondname: ";
	getline(cin, secondname);
	cout << "enter adress: ";
	getline(cin, adress);
	cout << "enter year: ";
	getline(cin, year);
	cout << "enter telephone: ";
	getline(cin, telephone);
	cout << "enter height: ";
	getline(cin, height);
	cout << "enter weight: ";
	getline(cin, weight);
	cout << "enter gender: ";
	getline(cin, gender);
	person objperson;
	objperson.setInfo(year, telephone, weight, height, lastname, firstname, secondname, adress, gender);
	objperson.printInfo();
	delete humans;
	system("pause");
	return 0;
}