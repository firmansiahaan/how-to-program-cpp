// Fig. 12.13: CommissionEmployee.h
// CommissionEmployee class derived from Employee.
#ifndef COMMISSION_H
#define COMMISSION_H

#include <string> 
#include "Employee.h"

class CommissionEmployee : public Employee {
public:
	CommissionEmployee(const std::string&, const std::string&,
		const std::string&, double = 0.0, double = 0.0);
	virtual ~CommissionEmployee() = default;

	void setCommissionRate(double);
	double getCommissionRate() const;

	void setGrossSales(double);
	double getGrossSales() const;

	// keyword virtual signals intent to override
	virtual double earnings() const override;
	virtual std::string toString() const override;
private:
	double grossSales; // gross weekly sales
	double commissionRate; // commission percentage
};

#endif