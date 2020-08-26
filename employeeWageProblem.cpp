#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int EMP_RATE_PER_HOUR = 20;
const int IS_PART_TIME = 1;
const int IS_FULL_TIME = 2;
const int NUMBER_OF_WORKING_DAYS = 20;

int empHrs = 0;
int empWage = 0;
int totalWage = 0;

int getEmpHrs() {

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
	return empHrs;
}

int getEmpWage() {

		srand(time(0));
		getEmpHrs();
		empWage = empHrs * EMP_RATE_PER_HOUR;
		totalWage += empWage;
		return totalWage;
}

int main() {

	int empWage = getEmpWage();
	cout << "Total wage of month is: "<< empWage << endl;

return 0;

}
