#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <unistd.h>
#include <list>
#include "EmpWageBuilder.h"
#include "IEmpWageComputation.h"

using namespace std;
class EmpWageComputation : IEmpWageComputation {
	int empHrs = 0;
	int totalEmpHrs = 0;
	int empWage = 0;
	int totalEmpWage = 0;
	int totalWorkingDays = 0;
	public:
		void addCompany(EmpWageBuilder empWageBuilder);
		void computeEmpHour(EmpWageBuilder empWageBuilder);
		void computeEmpWage(EmpWageBuilder empWageBuilder);
};

void EmpWageComputation :: addCompany(EmpWageBuilder empWageBuilder)
{
		list<EmpWageBuilder> employeeData;
		employeeData.push_back(empWageBuilder);
}

void EmpWageComputation :: computeEmpHour(EmpWageBuilder empWageBuilder)
{
	const int IS_PART_TIME = 1;
        const int IS_FULL_TIME = 2;

        srand(time(0));
        while (totalEmpHrs < empWageBuilder.getMaxHoursInMonth() && totalWorkingDays <  empWageBuilder.getWorkingDays()) {
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
}

void EmpWageComputation :: computeEmpWage(EmpWageBuilder empWageBuilder)
{
	computeEmpHour(empWageBuilder);
	totalEmpWage = totalEmpHrs * empWageBuilder.getEmpRatePerHour();
	cout << "Total Employee wage for" <<  " " << empWageBuilder.getCompany() << " " << "is: " << totalEmpWage <<endl;
	addCompany(empWageBuilder);
}

int main()
{
	EmpWageComputation empWageComputation;
	EmpWageBuilder *emp[2];
	emp[0] = new EmpWageBuilder("Bridgelabz", 20, 30, 150);
	empWageComputation.computeEmpWage(*emp[0]);

	sleep(2);

	emp[1] = new EmpWageBuilder("flipkart", 15, 20, 100);
	empWageComputation.computeEmpWage(*emp[1]);
	return 0;
}
