// pyramid opposit direction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	for (int i=0; i< 5; i++)
	{ 

		for (int sp = 1; sp <= i; sp++)
		{
			cout << " ";
		}
		for (int j = i; j < 5; j++)
		{

			cout << " *";

		}

		cout << endl;
	}


    return 0;
}

