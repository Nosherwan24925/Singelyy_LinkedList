#pragma once

#include"assignAbody.h"
#include"assignBbody.h"

int main()
{
	

	char part = '\0';


	while (1)
	{

		cout << ">>> Enter A to Enter Assignment1__A " << endl;
		cout << ">>> Enter B to Enter Assignment1__B " << endl;
		cout << ">>> Else to Exit The Program" << endl;
		cin >> part;

		if (part == 'A' || part == 'a')
		{
			LinkedList* L=partAbody();
			delete L;
			L = nullptr;
		}
		else if (part == 'b' || part == 'B')
		{
			partBbody();
		}
		else
		{
			break;
		}
	}






	cout << "----------------------------------------" << endl;
	cout << "The Program is Exited..." << endl;
	cout << "----------------------------------------" << endl;


	system("pause");
	return 0;
}