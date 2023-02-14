#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main() {
	
}

int load_data() {
 	ifstream myReadFile("sample.txt");
 	for (int i = 0; i < SIZE; i++)
 	{
		
 		myReadFile >> nums[i];
 		cout << nums[i] << " ";
 	}
	return nums;
}

int linear_search(int target, int numArray) {
	for (int i = 0; i < 20; i++){
		if (numArray[i] == target){
			return i;
		} else if (numArray[i] != target) {
			continue;
		} else {
			return -1;
	}
}

void modify_value(int intArray, int index, int oldValue, int newValue) {
	intArray[index] == value;
	cout << "Old value: " << oldValue << " " << "New value: " << newValue;
}

void add_int(int oldArray, int newArray){
	

}

	
		


	
