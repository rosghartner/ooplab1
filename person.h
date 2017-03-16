#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;

class person
{
private:
	string  year, telephone, weight, height;
	string lastname, firstname, secondname, adress, gender;
public:
	void setInfo(string info_lastname, string info_firstname, string info_secondname, string info_adress, string info_year, string info_telephone, string info_height, string info_weight, string info_gender)
	{
		lastname = info_lastname;
		firstname = info_firstname;
		secondname = info_secondname;
		adress = info_adress;
		year = info_year;
		telephone = info_telephone;
		height = info_height;
		weight = info_weight;
		gender = info_gender;

	}
	void printInfo()
	{
		cout <<"Name  " << lastname << " " << firstname << " " << secondname << endl;
		cout <<"Adress " << adress << endl;
		cout <<"Year " << year << endl;
		cout <<"Telephone " << telephone << endl;
		cout <<"Height " << height << endl;
		cout <<"Weight " << weight << endl;
		cout <<"Gender " << gender << endl;
	}
};
#endif //PERSON_H