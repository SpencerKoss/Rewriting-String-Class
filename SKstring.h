#ifndef SKSTRING_H
#define SKSTRING_H
#include <iostream>
#include <fstream>
using namespace std;

class SKstring
{
public:
	SKstring();
	SKstring(const char* str);
	int SKstring::length()const;
	char at(const int& index);
	bool read(istream& istr);
	void write(ostream& ostr);
	int compareTo(const SKstring& astr);
	const char * c_str();
	void setEqualTo(const SKstring& astr);
private:
	char *str;
	int cap;
	int end;
};
#endif
