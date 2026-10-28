#include "Student.h"

int main()
{
	Student s1("First","Qwe","Hj",16);
	Student s2("Second","Rty","Kl",16);
	Student s3("Third","Uio","Zx",16);
	Student s4("Fourth","Pas","Cv",16);
	Student s5("Fifth","Dfg","Bn",16);


	s1.writeFile("students.txt");
	s2.writeFile("students.txt");
	s3.writeFile("students.txt");
	s4.writeFile("students.txt");
	s5.writeFile("students.txt");

	Student::readFile("students.txt");

	return 0;
}