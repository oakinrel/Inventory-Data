#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"

using namespace std;



SalariedEmployee::SalariedEmployee(int id, double s) :Employee(id)
{
	salary = s;
}

double SalariedEmployee::getSalary() const
{
	return salary;
}

void SalariedEmployee::printPay()
{
	cout << fixed << setprecision(2) << showpoint;
	cout << "The pay for the salaried employee with ID number " << getEmpID() << " is $" << getSalary() / 52 << endl;
}