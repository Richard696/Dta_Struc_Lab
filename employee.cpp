// employee.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

struct employee {
	int age;
	float income;
	char name[10];
};



int main()
{
	int i = 0;

	employee p1[5];

	/*for (i =0; i < 5; i++){
		cout << "Enter employee name >> ";
		cin >> p1[i].name;
		cout  << "Enter employee age >> ";
		cin >> p1[i].age;
		cout << "Enter employee income >> ";
		cin >> p1[i].income;
		cin.sync();
		

		
	} 
	* This is also usable
	*/

	do {
		cout << "Enter employee name >> ";
		cin >> p1[i].name;
		cout << "Enter employee age >> ";
		cin >> p1[i].age;
		cout << "Enter employee income >> ";
		cin >> p1[i].income;
		cin.sync();
		i++;
	} while (i != 5);

	cout << "The list of 5 employee detail are:\n\n";

	for (i = 0; i < 5; i++) {
		
		cout << i << ". Name: " <<  p1[i].name << " age: " << p1[i].age << " income: " << p1[i].income << endl;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
