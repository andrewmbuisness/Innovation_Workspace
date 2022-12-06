#include "edms.h"
/*
 num:    number of employees in the record
 name:   array contains employees' names
 empid:  array contains employees' IDs
 dept:   array contains employees' departments
 doj:    array contains employees' start date
 salary: array contains employess' annual salary
*/
void searchEmployee(int num, string name[], int empid[], string dept[], string doj[], int salary[])
{
    int ui, eid;
    if (num == 0)
    {
        cout << "No Employee Info found!" << endl;
        return;
    }
 
    cout << "|Enter 0 to search by employee ID or enter 1 to search by employee name.| ";
    cin >> ui;
    fseek(stdin, 0, SEEK_END);

   
    if (ui == 0)
    {

        int id;
        cout << "Enter Employee ID: ";
        cin >> id;
        fseek(stdin, 0, SEEK_END);
        for (int i = 0; i < num; i++)
        {
            if (empid[i] == id)
            {
                cout << "Employee's ID number: " << empid[i] << endl;
                cout << "Employee's Name: " << name[i] << endl;
                cout << "Employee's Department: " << dept[i] << endl;
                cout << "Employee's Starting Date: " << doj[i] << endl;
                cout << "Employee's salary: " << salary[i] << endl;
            }
            else
            {
                cout << "Entered ID could not be found!";
            }
        }
    }
   
    else if (ui == 1)
    {
        string emp_Name;

        string FirstName, LastName;
        cout << "|Enter the employee name(First Last)| ";
        cin >> FirstName >> LastName;
        fseek(stdin, 0, SEEK_END);

        emp_Name.append(FirstName);
        emp_Name.append(" ");
        emp_Name.append(LastName);

        bool found = false;
        for (int i = 0; i <= num; i++)
        {
            if (name[i] == (emp_Name))
            {
                cout << "Employee ID: " << empid[i] << endl
                    << "Employee's Name: " << name[i] << endl
                    << "Employee's Department: " << dept[i] << endl
                    << "Employee's Start date: " << doj[i] << endl
                    << "Employee's Salary: " << salary[i] << endl;
                found = true;
            }
        }
        if (found == false)
        {
            cout << "Entered Name Can't be found!" << endl;
        }
    }

    fseek(stdin, 0, SEEK_END);
}