#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "Student.h"

using namespace std;

int main(char *argv[], int argc) {
	StudentList student_list;
	student_list.add(new Student("nana",FEMALE));
	student_list.add(new Student("kana",FEMALE));	

	StudentIterator it(&student_list);
	for (; it.isLast() != true; ) {
		Student *s = it.Next();
		string name = s->getName();
		string sex = SEXtoStr(s->getSex());
		cout << name <<","<< sex << endl;
	}

	return 0;
}