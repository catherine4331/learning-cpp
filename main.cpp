#if __INTELLISENSE__
#include <iostream>
#include <limits>
#else
import <iostream>;
import <limits>;
#endif

import employee;

using namespace std;

int main()
{
    cout << "There are " << 8 << " million ways to die!" << endl;
    cout << "The max int is " << numeric_limits<int>::max() << endl;

    Employee anEmployee;
    anEmployee.firstInitial = 'J';
    anEmployee.lastInitial = 'D';
    anEmployee.employeeNumber = 42;
    anEmployee.salary = 80000;

    cout << "Employee: " << anEmployee.firstInitial << anEmployee.lastInitial << endl;
    cout << "Number: " << anEmployee.employeeNumber << endl;
    cout << "Salary: $" << anEmployee.salary << endl;

    return 0;
}