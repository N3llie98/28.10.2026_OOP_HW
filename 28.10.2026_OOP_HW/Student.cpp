#include "Student.h"

Student::Student(string _name, string _surname, string _university, int _age)
{
	name = _name;
	surname = _surname;
	university = _university;
	age = _age;
}

void Student::init()
{
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter surname: ";
	cin >> surname;
	cout << "Enter university: ";
	cin >> university;
	cout << "Enter age: ";
	cin >> age;
}

void Student::print()
{
	cout << "Name: " << name << "\nSurname: " << surname << "\nUniversity: " << university
		<< "\nAge: " << age << endl << endl;
}

void Student::writeFile(string filename)
{
	ofstream write(filename, ios::app | ios::out);
	write << "Name: " << name << "\nSurname: " << surname << "\nUniversity: " << university
		<< "\nAge: " << age << endl;
	write.close();
}

void Student::readFile(string filename)
{
	ifstream read(filename, ios::in);
	char buffer[100];
	do {
		read.getline(buffer, 100);
		cout << buffer << endl;
	} while (read);
	read.close();
}
