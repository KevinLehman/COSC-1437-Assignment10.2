#pragma once
#ifndef EXPENSES_H
#define EXPENSES_H

#include <string>
#include <iostream>
using namespace std;

const int MAX_EXP = 4;

class Expenses
{
private:
	float ExpenseAmount[MAX_EXP];
public:
	float TotalExpense();
};
#endif // !EXPENSES_H
#pragma once

