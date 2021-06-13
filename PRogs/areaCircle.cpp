/*
Name: Akhadbek Rizakulov
ID: 2010227
Purpose: Program in C++  to calculate area of a circle using functions
(Write a function with no arguments and no return type).
Date: 24.11.2020
*/
#include<iostream>
using namespace std;
void area(); // Function declaration

int main() // Main function
{
	cout << "Program to calculate area of a circle using functions" << endl << endl;
	area(); // Calling the function
	system("pause");
	return 0;
}

void area() // Function definition
{
	float r, pi=3.14, area;
	cout << "Enter value for radius: ";
	cin >> r;
	area=pi*r*r; // Formula of area of a cirlce
	cout << "Area = " << area << endl;
}

