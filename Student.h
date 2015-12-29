#pragma once

#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

enum SEX {
	MALE,
	FEMALE
};
string SEXtoStr(SEX _s);

class Student
{
	string name;
	SEX sex; //’j‚Ìq: 1, —‚Ìq: 2
public:
	Student(string _name, SEX _sex);
	~Student();
	string getName();
	SEX getSex();	
};

class StudentList {
	vector<Student*> students_vec;
public:
	StudentList();
	~StudentList();
	
	bool add(Student *_new_student);
	Student *at(int _index);
	int getCount();
};

class StudentIterator {
	StudentList *studentList;
	int index;
public:
	StudentIterator(StudentList *_studentList);

	bool isLast();
	Student* Next();
};
