//Program 2: This program reads a file from stream and then populates the vector using the compare function, then it
//uses bubble sort to sort the vector by ASCII Value and then outputs the sorted vector to the output file using 
//setw(10) and 7 words per line
#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <fstream>
#include "SKstring.h"
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	vector<SKstring> words(78);
	ifstream fin;
	ofstream fout;
	fin.open("infile2.txt");
	if (fin.fail()) {
		cout << "Error reading file\n";
	}
	
	for (int i = 0; i < 78; i++) {
		words[i].read(fin);
	}
	fin.close();

	bool hasSwap = true;
	while (hasSwap == true) {
		hasSwap = false;
		for (int i = 0; i < 77; i++) {
			if (words[i].compareTo(words[i + 1]) == 1) {
				swap(words[i], words[i + 1]);
				hasSwap = true;
			}
		}//bubble sort 
		fout.open("outfile2.txt");
		if (fout.fail()) {
			cout << "Error writing file!\n";
		}
		for (int j = 0; j < 78; j++) {
			fout << setw(10);
			words[j].write(fout);
			if ((j + 1) % 7 == 0) {
				fout << endl;
			}
		}
	
	system("pause");
    return 0;
}

