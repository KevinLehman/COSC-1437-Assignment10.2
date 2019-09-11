#ifndef COMPANY_H
#define COMPANY_H

#include "Expenses.h"
#include <string>
#include <iostream>


using namespace std;
const int NAME_SIZE = 40;
const int QUARTER_SIZE = 2;

class Company
{
private:
	static char CompanyName[NAME_SIZE];
	char DivisionName[NAME_SIZE];
	char Quarter[QUARTER_SIZE];
	float BonusBudgetRate;
	float TotalSales;
	Expenses TotalExpenses;
public:
	static bool setCoName(char[]);
	bool setDivName(char[]);
	bool setQuarter(char[]);
	bool setSales(float);
	std::string getCoName();
	std::string getDivName();
	char getQuarter();
	float getSales();
	float netIncome(float);
	Company();
};





#endif // !COMPANY_H
#pragma once
