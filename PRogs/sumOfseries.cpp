/*
Name: Akhadbek Rizakulov
ID: 2010227
Purpose: Program in C++ to sum the series
(Write a Function with return type but no arguments)
1/!1 + 4/!2 + 27/!3 +……………………………………+ n^n/!n.
Date: 24.11.2020
*/
#include<iostream>
using namespace std; 
/*
Declaration of helper sub-functions 
*/
int factorial(int factor);
int power(int pow);
float calculate(int nominator, int denominator);
/*
Definition of Function with no arguments, but with return type
*/
float withNoArguments()
{
	int a;
	float sum =0.0;
	cout << "Please enter some nuber: ";
	cin>>a;
	for(int i = 1; i <= a; i++)
	{
		sum+=calculate(i,i); // Calculating sum by adding called "calculate" function several times
	}
	return sum;

}
/*
Main function
*/
int main()
{
	cout << "Final sum = " << withNoArguments() << endl; // To output the value of final sum
	return 0;
}
/*
Definitions of Helper sub-functions
*/
int factorial(int factor) // Function to calculate factorial of denominator
{
	int temp=1;
	if(factor == 1)
	{
		return factor;
	}
	else
	{
		for(int i = 1; i <= factor; i++)
		{
			temp*=i;
		}
		return temp;
	}
}
int power(int pow) // Function to calculate value of nominator
{
	int var;
	var=pow;
	if(pow == 1)
	{
		return var;
	}
	else
	{
		for(int i = 1; i < pow; i++)
		{
			var*=pow;
		}
		return var;
	}
}
float calculate(int nominator, int denominator) // Function to calculate value of fraction
{
	float sum = 0.0, nom = 1.0, den = 1.0;
	nom*=power(nominator); // Calculating value of nominator by multiplying called "pow" function
	den*=factorial(denominator); // Calculating value of denominator by multiplying called "factorial" function
	sum+=nom/den; // Calculating final sum of series
	return sum;
}
