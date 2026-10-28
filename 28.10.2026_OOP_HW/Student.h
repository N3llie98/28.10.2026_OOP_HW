#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Student
{
	string name;
	string surname;
	string university;
	int age;
public:
	Student(){}
	Student(string _name, string _surname, string _university, int _age);
	void init();
	void print();

	void writeFile(string filename);
	static void readFile(string filename);
};

