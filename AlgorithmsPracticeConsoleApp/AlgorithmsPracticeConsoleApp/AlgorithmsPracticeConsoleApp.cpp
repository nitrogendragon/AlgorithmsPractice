#pragma once
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "calculator.h"
#include "BT.h"



int main()
{
	/* initialize random seed: */
	srand(time(NULL));
	/*Calculator calc1;
	calc1.Calculate();*/
	int T;
	cout << " enter Number of tests you would like to do";
	cin >> T;
	while (T--) 
	{
		Node *root;
		Node *tmp;
		root = NULL;
		int N;
		cout << "Enter a number 1 to 1000";
		cin >> N;
		int const Nc = 1000;
		int values[Nc];
		for (int i = 0; i < N; i++)
		{
			int k;
			k = int(rand() % 100);
			cout << k << "\n";
			root = insert(root, k);
		}
		inorder(root, values);
		cout << "\n";
	}
}

