#include "edms.h"

/*
 num:    number of employees in the record
 name:   array contains employees' names
 empid:  array contains employees' IDs
 dept:   array contains employees' departments
 doj:    array contains employees' start date
 salary: array contains employess' annual salary
*/

void updateEmployee(int num, string name[], int empid[],
    string dept[], string doj[], int salary[]) {

    int eid;

    if (num >= 1) {
        cout << "|Enter employee ID| ";
        cin >> eid;
        int flag = 0;
        for (int i = 0; i < num; i++)
        {
            if (empid[i] == eid)
            {
                flag = 1;
                cout << "Choose area to update|" << endl;
                cout << "Department, please press 1" << endl;
                cout << "Salary, please press 2" << endl;
                cout << "Both salary and department, please enter 3" << endl;
                cout << " Enter here: ";
                int decis;
                cin >> decis;

                string deptl;
                if (decis == 1 || decis == 3) {
                    cin.ignore();
                    while (1)
                    {
                        cout << "Enter new Dept. ";
                        cin >> deptl;

                        if (deptl == "Marketing" || deptl == "Finance" || deptl == "Human Resource" || deptl == "Technical")
                        {
                            dept[i] = deptl;
                            break;
                        }
                        else {

                            cout << "Department Must be one of the following: Marketing, Finance, Human Resource, Technical. Re-Enter " << endl;
                        }
                    }
                }
                int salaryupd;
                if (decis == 2 || decis == 3)
                {
                    while (1)
                    {
                        cout << "Enter updated salary: ";
                        cin >> salaryupd;

                        if (salaryupd >= 30000 && salaryupd <= 200000)
                        {

                            salary[i] = salaryupd;
                            break;
                        }
                        else {

                            cout << "Salary needs range from (30000 - 200000). Re-Enter " << endl;
                        }
                    }
                }
                break;

            }

        }
        if (flag == 0) {
            cout << "No information found." << endl;
        }
    }
    else {
        cout << "No information found." << endl;
    }
}