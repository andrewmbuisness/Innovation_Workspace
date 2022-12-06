#include "edms.h"
#include <iostream>
#include <array>
using namespace std;

/*
 num:    number of employees in the record
 name:   array contains employees' names
 empid:  array contains employees' IDs
 dept:   array contains employees' departments
 doj:    array contains employees' start date
 salary: array contains employess' annual salary
*/



void addEmployee(int& num, string name[], int empid[],
	string dept[], string doj[], int salary[]) {
	int id, loc = num;
	bool uniqueid = true;
	if (num < 100)
	{ 
	
			cout << "Enter employee ID: ";
			
			do
			{
				cin >> id;

				for (int i = 0; i <= num; i++)
				{
					if (id == empid[i])
					{
						uniqueid = false;
						cout << "ID is currently in use| PLease enter unique ID: ";
						break;
					}
					else
					{
						uniqueid = true;
					}
				}
				if (id < 10000 || id > 99999)
				{
					cout << "Incorrect ID Entry| ID parameters must be between 10000 - 99999| Please Re-Enter: ";
				}

			
			
				if (num >= 1) 
				{
					for (int i = 0; i < num; i++)
					{
						if (id < empid[i]) 
						{
							loc = i;
							break;
						}
					}

					for (int i = num - 1; i >= loc; i--)
					{
						name[i + 1] = name[i];
						empid[i + 1] = empid[i];
						dept[i + 1] = dept[i];
						doj[i + 1] = doj[i];
						salary[i + 1] = salary[i];
					}
				}
			}while ((id < 10000 || id > 99999) || !uniqueid);

			

			empid[loc] = id;

			cout << "Enter employee's name in format |First Last|: ";
			cin.ignore();
			getline(cin, name[loc]);

			cout << "Enter employee's department||Marketing, Finance, Human Resource, Technical|| "; 
			getline(cin, dept[loc]);

			if (dept[loc] != "Marketing" && dept[loc] != "Finance" && dept[loc] != "Human Resource" && dept[loc] != "Technical")
			{
				cout << endl << "You Have entered an invalid Dept. Caps and Space Sensitive|Try Again. " << endl;
				cout << "Enter employee's department: ";
				getline(cin, dept[loc]);
			}
			

			cout << "Enter employee's start date in format MM/DD/YYYY: ";
			cin >> doj[loc];

			cout << "Enter employee's annual salary: ";
			do
			{
				cin >> salary[loc];
				if (salary[loc] <= 30000 || salary[loc] >= 200000)
				{
					cout << endl;
					cout << "Invalid Salary, Salary must be between 30000-200000| Please Re-Enter: ";
					
				}

			} while (salary[loc] <= 30000 || salary[loc] >= 200000);
			cout << endl;
			

			num = num + 1;
			
	}
	else
	{
		cout << "Maximum Employee amount reached!" << endl;
		cout << endl;
		
	}
}