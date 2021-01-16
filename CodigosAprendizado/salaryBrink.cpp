

#include <iostream>
using namespace std;


int main(){

    float salary;
    float perAllow;
    float perDeduc;
    float netSalary;
    cout << "Enter with the Salary: ";
    cin >> salary;
    cout << "Enter with the Percentage of Allowances: ";
    cin >> perAllow;
    cout << "Enter with the Percentage of Deductions: ";
    cin >> perDeduc;
    netSalary = salary + salary*perDeduc*perAllow;
    cout << "The Salary with these properties is: " << netSalary;
}
