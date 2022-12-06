#include "edms.h"

/*
 num:    number of employees in the record
 name:   array contains employees' names
 empid:  array contains employees' IDs
 dept:   array contains employees' departments
 doj:    array contains employees' start date
 salary: array contains employess' annual salary
*/

void deleteEmployee(int& num, string name[], int empid[],
    string dept[], string doj[], int salary[]) 
{

    int eid, loc = -1, i = 0;

    if (num >= 1) 
    {
        cout << "Enter employee ID:";
        cin >> eid;

        for (i = 0; i < num; i++)
        {
            if (eid = empid[i])
            {
                loc--;
                for (int k = loc; k < num; k++)
                {
                    int Temp = empid[k];
                    empid[k] = empid[k + 1];
                    empid[k + 1] = Temp;
                }
            }
            if (i = num & eid != empid[i])
            {
                cout << "Employees Record is no longer active.";
            }
        }

        num = num - 1;
      
    }
    else {
        cout << "Employee Info can't be found." << endl;

    }
}
