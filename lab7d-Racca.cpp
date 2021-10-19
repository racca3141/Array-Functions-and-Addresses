// Emerson Racca
// October 18, 2021
// Lab 7d - Array Functions and Addresses

/*
Write three useful functions that act on an array.

1. Write a function that takes in an array an populates it with random integers from 1 - 100.  Use the following function prototype.

void populateIntArray(int a[], int size);
2. Write a function that takes in an array and it's size and outputs the contents to the screen. Use the following function prototype.

void printArrayContents(int a[], int size);
3. Write a function that takes in an array and it's size and outputs the address of each element.

void printArrayAddresses(int a[], int size);
4. Demonstrate the usage of all these functions in the main. No user input (NO UI).
*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void populateIntArray(int a[], int size);
void printArrayContents(int a[], int size);
void printArrayAddresses(int a[], int size);

int main(void) {
	srand((unsigned int) time(0));

	const int s = 100;
	int aInt[s];

	cout << "Array Functions and Addresses\n";
	cout << "This app demonstrates three useful functions that act on an array.\n\n";

	populateIntArray(aInt, s);
	printArrayContents(aInt, s);
	cout << endl << endl;
	printArrayAddresses(aInt, s);

	return 0;
}

void populateIntArray(int a[], int size) {
	for (int i = 0; i < size; i++) {
		a[i] = 1 + rand() % 100;
	}
}

void printArrayContents(int a[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "Element " << i << " value:\t" << a[i] << endl;
	}
}

void printArrayAddresses(int a[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "Element " << i << " address:\t" << &a[i] << endl;
		//cout << "Element " << i << " address:\t" << int(&a[i]) << endl;; // int address conversion
	}
}