// Assign02-OutputManipulation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string	first;
	string	middle;
	string	last;
	int		age;

	double	prevBalance = 10000;		//initial value
	double	expenditures;
	double	currBalance;

	cout << endl << "Type in the FIRST name:  ";
	cin >> first;
	cout << endl << "MIDDLE name or initial:  ";
	cin >> middle;
	cout << endl << "Type in the  LAST name:  ";
	cin >> last;
	cout << endl << "Enter the AGE in years:  ";
	cin >> age;

	cout << endl << "First name        Middle         Last name           Age";
	cout << endl << "----------        ------         ---------           ---";
	cout << endl << left << setw(18) << first << setw(15) << middle << setw(20) << last << setw(3) << age << endl << endl;

	cout << endl  << endl << "Amount of expenditures:  ";
	cin >> expenditures;

	currBalance = prevBalance - expenditures;

	cout << fixed << right << setprecision(2) << endl << endl;
	cout << setw(25) << "Previous Balance:  $" << setw(10) << prevBalance << endl;
	cout << setw(25) << "                   -" << setw(10) << expenditures << endl;
	cout << setw(25) << "                    " << setw(10) << "----------" << endl;
	cout << setw(25) <<  "Current Balance:  $" << setw(10) << currBalance << endl << endl;
	cout << setw(25) << "Formatted Output:  $" << setw(10) << setfill('#') << currBalance << endl << endl;
	
	cout << endl << endl;
	system("pause");
    return 0;
}

