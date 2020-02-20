#pragma once
#include <iostream>
#include <string>
#include <array>
#include <stdio.h>
using namespace std;
class Calculator
{
public:
	
	int Calculate();
private:
	const char validOps[4] = { '+', '-','/','*' };
	bool cont = true;
	char op;
	string sNum1, sNum2;
	string conversionErrorStringToInt = "Error, could not convert to int, please try again\n";
	int num1, num2;
};

