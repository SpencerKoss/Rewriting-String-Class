#include "stdafx.h"
#include "SKstring.h"
#include <iostream>
using namespace std;

SKstring::SKstring()
{
	str = new char[20];
	cap = 20;
	end = 0;
	str[end] = '\0';
}//constructor

SKstring::SKstring(const char* ptr) {
	str = new char[20];

	for (int i = 0; i < 20; i++) {
		str[i] = ptr[i];
	}
}

int SKstring::length() const {
	int end = 0;
	int i;
	for (i = 0; str[i] != '\0'; i++);
		cout << "The size of the word is: " << i << " ";
		end = i;
		return end;
	
}

char SKstring::at(const int& index) {
	if (index < 0 || index > 20) {
		cout << "\0";
	}
	else {
		cout << "The first letter is: " << " " << str[index];
	}
	return index;
}

bool SKstring::read(istream& istr) {
	if (istr >> str) 
		return true;
	else
		return false;
}

void SKstring::write(ostream& ostr) {
	ostr << str;
}

const char* SKstring::c_str() {
	return str;
}

int SKstring::compareTo(const SKstring& astr) {
	int i = 0;
	int value = 0; 
	while (astr.str[i] != '\0' || str[i] != '\0') {
		if (value > 0) {
			return -1;
		}
		if (value < 0) {
			return 1;
		}
		i++;
	}
	return 0;
}

void SKstring::setEqualTo(const SKstring& astr) {
	int size = 0;
	size = astr.length();
	for (int i = 0; i < size; i++) {
		str[i] = astr.str[i];
	}
}