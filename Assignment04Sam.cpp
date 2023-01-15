// #include "stdafx.h"

// #include "windows.h"

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;
//main calling
int main(int argc, char* argv[])

{
	// The executable name and at least one argument?
	if (argc < 2)

	{
		cout << "Error with input agrs.." << endl;
		return 1;
	}
//adding comment to see changes
	// For debugging purposes only

	for (int i = 0; i < argc; i++)
	{
		cout << i << ":" << argv[i] << endl;
	}

	ifstream inFile;
	//opening ifstream
	inFile.open(argv[1]);

	if (!inFile)

	{
		cout << "Error with file name.." <<endl;
		return 1;

	}
	//showing message
	cout << setw(76) << setfill('*') << "*" << endl;
	cout << setw(51) << "Welcome to my Letter Count Program" << setw(21) << setfill('*') << endl;
	cout << setw(76) << setfill('*') << "*" << endl;
	cout << endl;
	std::cout << "Analyzing file '" << argv[1] << "inFile" << std::endl << std::endl;

	///////////////////////

	// Work here with open file.....

	///////////////////////

	int as = 0;
	int es = 0;
	int	is = 0;
	int	os = 0;
	int	us = 0;
	int	js = 0;
	int	ks = 0;
	int	ls = 0;

	string str;

	while (!inFile.eof()) {

		inFile >> str;
		//for loop and if structure to count all vowels
		for (int i = 0; i < str.size(); i++) {

			if (str[i] == 'a' || str[i] == 'A') 
			{
					as++;
			}
			else if (str[i] == 'e' || str[i] == 'E')
			{
					es++;
			}
			else if (str[i] == 'i' || str[i] == 'I')
			{
				is++;
			}
			else if (str[i] == 'o' || str[i] == 'O')
			{
				os++;
			}
			else if (str[i] == 'u' || str[i] == 'U')
			{
				us++;
			}
			else if (str[i] == 'j' || str[i] == 'J')
			{
				js++;
			}
			else if (str[i] == 'k' || str[i] == 'K')
			{
				ks++;
			}
			else if (str[i] == 'l' || str[i] == 'L')
			{
				ls++;
			}
		}

	}

	inFile.close();
	//outputting
	cout << "The number of A's: " << setw(45) << setfill('.') << as << endl;
	cout << "The number of E's: " << setw(45) << setfill('.') << es << endl;
	cout << "The number of I's: " << setw(45) << setfill('.') << is << endl;
	cout << "The number of O's: " << setw(45) << setfill('.') << os << endl;
	cout << "The number of U's: " << setw(45) << setfill('.') << us << endl;
	cout << "The number of J's: " << setw(45) << setfill('.') << js << endl;
	cout << "The number of K's: " << setw(45) << setfill('.') << ks << endl;
	cout << "The number of L's: " << setw(45) << setfill('.') << ls << endl;
	cout << "The vowel count is: "<< setw(45) << setfill('.') << (as + es + is + os + us + js + ks+ ls) << endl;

	cout << "Press any key to continue...";

	

	return 0;

}