/*
Name: Akhadbek Rizakulov
ID: 2010227
Purpose: Program in C++ to convert time to minutes using functions
(Write a function with arguments but no return type).
Date: 24.11.2020
*/
#include<iostream>
using namespace std;
/*
Function to convert time to minutes
*/
void convert(int total, int hour, int sec, int min)
{
/*
To input values for hour, minute and second
*/
	cout << "Please enter values of time:" << endl << endl;
    cout << "Hours: ";
    cin >> hour;
    cout << "Minutes: ";
    cin >> min;
    cout << "Seconds: ";
    cin >> sec;
    hour = hour * 60; // To convert hours to minutes
    sec = sec / 60; // To convert seconds to minutes
    total = hour + min + sec; // To sum all values in minutes
	cout << "Total time in minutes = " << total << endl;	
}

int main()// Main function
{
	cout << "Program to convert time to minutes using functions" << endl << endl;
	int total, hour, sec, min; // Variables for exchanging values
	convert(total, hour, sec, min); // Calling the function by exchanging variables
	system("pause");
    return 0;
}

