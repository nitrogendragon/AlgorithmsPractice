#pragma once
# include <iostream>
#include <string>
#include <sstream>
#include "calculator.h"
#include <algorithm>    // std::find
using namespace std;

int Calculator:: Calculate()
{
	while (cont == true) {
		cout << "Enter operator either + or - or * or / or x to exit: ";
		cin >> op;
		if (op == 'x') {
			return 0;
		}
		if (std::find(begin(validOps),std::end(validOps), op) != std::end(validOps)) {}
		else {
			cout << "Enter a valid operand\n";
			continue;
		}
		while (true) {
			cout << "Enter two operands: ";
			cin >> sNum1 >> sNum2;
			try
			{
				num1 = stoi(sNum1);
				num2 = stoi(sNum2);
				/*istringstream(sNum1) >> num1;
				istringstream(sNum2) >> num2;*/
				cout << "These are valid values\n";
				break;
			}
			catch (std::invalid_argument const &e)
			{
				std::cout << "Bad input: std::invalid_argument thrown" << '\n';
				continue;
			}
			catch (std::out_of_range const &e)
			{
				std::cout << "Integer overflow: std::out_of_range thrown" << '\n';
				continue;
			}
		}
		switch (op)
		{
		case '+':
			cout << (num1 + num2) << "\n";
			break;			   
							   
		case '-':			   
			cout << (num1 - num2) << "\n";
			break;			   
							   
		case '*':			   
			cout << (num1 * num2) << "\n";
			break;			   
							   
		case '/':			   
			cout << (num1 / num2) << "\n";
			break;

		default:
			// If the operator is other than +, -, * or /, error message is shown
			cout << "Error! How the heck did you get this? Something unexpected has happened.\n";
			break;
		}
	}
return 0;
}

