#include <iostream>

using namespace std;

class IEmpWageComputation {
	 virtual void addCompany(EmpWageBuilder empWageBuilder) = 0;
         virtual int computeEmpHour(EmpWageBuilder empWageBuilder) = 0;
         virtual void computeEmpWage(EmpWageBuilder empWageBuilder) = 0;
};
