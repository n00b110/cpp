#include <iostream>
#include <string>
#include "main.h"
#include <fstream>

using namespace std;


int main() {
	string str;
	int input;
	int numArray[20];
	int result;
	ifstream myReadFile("sample.txt");
 	for (int i = 0; i < 20; i++) {
		
 		myReadFile >> numArray[i];
 	}
	cout << "1) Check if integer exists in an array" << endl;
	cout << "2) Modify value of an integer in an array" << endl;
	cout << "3) Add a new integer to the end of an array" << endl;
	cout << "4) Remove integer from array or replace value with zero!" << endl;
	cin >> input;
	try {
		switch (input) {
			case 1:
				cout << "What number to you want to search for?";
				cin >> input;
				int result = asearch(numArray, 20, input); 
				if (result == -1){
					cout << "Could not find: " << input << "in array" << endl;
				} else {
					cout << "Found " << input << "at " << result << endl;
				}						
			case 2:

			case 3:
				cout << "What number to you want me to add to the array?";
				cin >> str;
				append(numArray, 20, input);

			case 4:
				cout << "Do you want to remove an integer from the array?";
				cin >> str;
				if (str == "Y"){
					cout << "Enter the index of the number: ";
					cin >> input;
					cout << "Enter the value you want to put in the array";
					cin >> result;
					result = modify_value(numArray, input, result);
								
		}	





	
		


	
