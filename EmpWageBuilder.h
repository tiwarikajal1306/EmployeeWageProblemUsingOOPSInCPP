#include <iostream>
#include <cstdlib>
#include <string>
#include <unistd.h>
#include <list>
using namespace std;


class EmpWageBuilder {
private:
        int empRatePerHour;
        int numberOfWorkingDays;
        int maxHoursInMonth;
        string company;
        int totalEmpWage;
public:
        EmpWageBuilder(string companyName, int ratePerHour, int workingDays, int hoursInMonth) {
                this -> company =companyName;
                this -> empRatePerHour = ratePerHour;
                this -> numberOfWorkingDays = workingDays;
                this -> maxHoursInMonth = hoursInMonth;
}
void setTotalEmpWage(int totalEmpWage) {
        this -> totalEmpWage = totalEmpWage;
}
int getEmpRatePerHour() {
        return empRatePerHour;
}
int getWorkingDays() {
        return numberOfWorkingDays;
}
int getRatePerHour() {
        return empRatePerHour;
}
int getMaxHoursInMonth() {
        return maxHoursInMonth;
}
string getCompany() {
        return company;
}
};
