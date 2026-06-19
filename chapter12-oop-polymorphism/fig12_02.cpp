// Fig. 12.2: fig12_02.cpp
// Aiming a derived-class pointer at a base-class object.
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

int main() {
	CommissionEmployee commissionEmployee{
		"Sue", "Jones", "222-22-2222", 10000, .06 };

	// aim derived-class pointer at base-class object
	// Error: a CommissionEmployee is not a BasePlusCommissionEmployee
	BasePlusCommissionEmployee* basePlusCommissionEmployeePtr{ 
		&commissionEmployee };
}