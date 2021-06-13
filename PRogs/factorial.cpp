/*
Name: Akhadbek Rizakulov
ID: 2010227
Purpose: Program in C++ to find factorial of a number using functions
(Write a function with arguments and return type).
Date: 24.11.2020
*/
#include<iostream>
using namespace std;

int factorial(int n); // Function declaration

int main()
{
    int n;
    cout << "Enter any positive integer: ";
    cin >> n;
    cout << "Factorial of " << n << " = " << factorial(n) << endl; // Calling the function
	system("pause");
    return 0;
}

int factorial(int n) // Function definition
{
/*
If condition to check the value of inputted value
*/	
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
