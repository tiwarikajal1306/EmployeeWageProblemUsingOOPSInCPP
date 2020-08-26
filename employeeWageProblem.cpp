#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <unistd.h>

using namespace std;

class EmpWageComputation {

private:
int empRatePerHour = 20;
int numberOfWorkingDays = 20;
int maxHoursInMonth = 100;
string company;

int empHrs = 0;
int totalEmpHrs = 0;
int empWage = 0;
int totalEmpWage = 0;
int totalWorkingDays = 0;

public:
EmpWageComputation(string companyName, int ratePerHour, int workingDays, int hoursInMonth) {
	this -> company =companyName;
	this -> empRatePerHour = ratePerHour;
	this -> numberOfWorkingDays = workingDays;
	this -> maxHoursInMonth = hoursInMonth;
}

public:
int getEmpHrs()
{
	const int IS_PART_TIME = 1;
	const int IS_FULL_TIME = 2;

	srand(time(0));
        while (totalEmpHrs < maxHoursInMonth && totalWorkingDays <  numberOfWorkingDays) {
                totalWorkingDays++;
        	int employee_Check = rand() % 3 + 1;
		switch( employee_Check ) {

			case IS_PART_TIME:
				empHrs = 4;
				break;

			case IS_FULL_TIME:
				empHrs = 8;
				break;
			default:
				empHrs = 0;
		}

		totalEmpHrs += empHrs;
	}

	return totalEmpHrs;
}

int getEmpWage()
{

	int totalEmpHrs = getEmpHrs();
	totalEmpWage = totalEmpHrs * empRatePerHour;
	return totalEmpWage;
}
};

int main()
{

	EmpWageComputation bridgelabz("Bridgelabz", 20, 30, 150);
	int bridgelabzEmpWage = bridgelabz.getEmpWage();
	cout << "Total wage of Bridgelabz is: "<< bridgelabzEmpWage << endl;

	sleep(2);

	EmpWageComputation flipkart("flipkart", 15, 20, 100);
       	int flipkartEmpWage = flipkart.getEmpWage();
        cout << "Total wage of flipkart is: "<< flipkartEmpWage << endl;

	return 0;
}
