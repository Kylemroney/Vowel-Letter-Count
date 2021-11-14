// KyleRoneyWeek4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Create a program that counts the number of vowels in a file.  

// Requirements:

// User must specify the name of the file(from the command line) to analyze when the program is run.If not an error should be generated.
// Use constants where appropriate.
// Use I/O(stream) manipulators to format the output so that it is identical to the example below
// Pass the name of the file to read in from the command line.

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
	// The executable name and at least one argument?
	if (argc < 2)
	{
		std::cout << "Error with input agrs.." << std::endl;
		return 1;
	}
	// For debugging purposes only
	for (int i = 0; i < argc; i++)
	{
		std::cout << i << ":" << argv[i] << std::endl;
	}
	std::ifstream inFile;
	inFile.open(argv[1]);
	if (!inFile)
	{
		std::cout << "Error with file name.." << std::endl;
		return 1;
	}
	///////////////////////
	// Work here with open file.....
	///////////////////////
	// Variables I will be using for this program
	int vowelA = 0;
	int vowelE = 0;
	int vowelI = 0;
	int vowelO = 0;
	int vowelU = 0;
	int letterK = 0;
	int letterM = 0;
	int letterR = 0;
	string vowel;
	// Week 4 program introduction
	cout << "************************************************************" << endl;
	cout << "************ Welcome to my Letter Count Program ************" << endl;
	cout << "************************************************************" << endl;
	cout << "\nAnalyzing file " << argv[1] << endl;
	// Begining the loop to determine the number of vowels on each word
	while (getline(inFile, vowel)) {
		for (int v = 0; v < vowel.length(); v++) {
			if (vowel.at(v) == 'a') {
				vowelA++;
			}
			else if (vowel.at(v) == 'A') {
				vowelA++;
			}
			else if (vowel.at(v) == 'e') {
				vowelE++;
			}
			else if (vowel.at(v) == 'E') {
				vowelE++;
			}
			else if (vowel.at(v) == 'i') {
				vowelI++;
			}
			else if (vowel.at(v) == 'I') {
				vowelI++;
			}
			else if (vowel.at(v) == 'o') {
				vowelO++;
			}
			else if (vowel.at(v) == 'O') {
				vowelO++;
			}
			else if (vowel.at(v) == 'u') {
				vowelU++;
			}
			else if (vowel.at(v) == 'U') {
				vowelU++;
			}
			else if (vowel.at(v) == 'k') {
				letterK++;
			}
			else if (vowel.at(v) == 'K') {
				letterK++;
			}
			else if (vowel.at(v) == 'm') {
				letterM++;
			}
			else if (vowel.at(v) == 'M') {
				letterM++;
			}
			else if (vowel.at(v) == 'r') {
				letterR++;
			}
			else if (vowel.at(v) == 'R') {
				letterR++;
			}
		}
	}
	// Begin outputs for the number of vowels and the total vowel count
	cout << "\nThe number of A's: ................................" << vowelA << endl;
	cout << "The number of E's: ................................" << vowelE << endl;
	cout << "The number of I's: ................................" << vowelI << endl;
	cout << "The number of K's: ................................" << letterK << endl;
	cout << "The number of M's: ................................" << letterM << endl;
	cout << "The number of O's: ................................" << vowelO << endl;
	cout << "The number of R's: ................................" << letterR << endl;
	cout << "The number of U's: ................................" << vowelU << endl;
	cout << "The combined vowel and letter count is: ................................" << vowelA + vowelE + vowelI + vowelO + vowelU + letterK + letterM + letterR << endl;
}

// Run program : Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
