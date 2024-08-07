#include "EmployeeManagement.hpp"
#include "TempWorker.hpp"
#include "ContractEmployee.hpp"
#include "Apprentice.hpp"

int main() {
    EmployeeManager employeeManager = EmployeeManager();
    
	Apprentice apprentice = Apprentice(10);
	TempWorker tempWorker = TempWorker(15);
	ContractEmployee contractEmployee = ContractEmployee(20);

    employeeManager.addEmployee(&apprentice);
    employeeManager.addEmployee(&tempWorker);
    employeeManager.addEmployee(&contractEmployee);

    std::cout << "Executing workday for all employees:" << std::endl;
    employeeManager.executeWorkday();

    contractEmployee.recordNotWorkedHours(3);
    apprentice.attendSchool(2);

	std::cout << "Executing workday for all employees:" << std::endl;
    employeeManager.executeWorkday();

    std::cout << "Calculating payroll:" << std::endl;
    employeeManager.calculatePayroll();

    return 0;
}