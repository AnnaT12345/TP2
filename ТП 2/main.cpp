#include <iostream>
#include "List.h"

using namespace std;

void menuPrint()
{
	cout << endl << "\tMAIN PROGRAMM MENU" << endl;
	cout << "1 - Print objects" << endl;
	cout << "2 - Add object" << endl;
	cout << "3 - Edit object" << endl;
	cout << "4 - Delete object" << endl;
	cout << "5 - Find a store by product" << endl;
	cout << "6 - Flip sorting flag" << endl;
	cout << "7 - Find the best price for the product" << endl;
	cout << "0 - Exit programm" << endl;
}

void menu()
{
	myList obj;

	int take = 0;

	while (1)
	{
	
		menuPrint();
		obj.seeFlag();

		mcin(&take);
		switch (take)
		{
		case 0:
			return;

		case 1:
			obj.print();
			break;

		case 2:
			obj.add();
			break;

		case 3:
			try {
				obj.edit();
			}
			catch (int e)
			{
				if (e == -1)
					cout << "EXEPTION: invalid index" << endl;
				if (e == 0)
					cout << "EXEPTION: no objects added yet" << endl;
			}
			break;

		case 4:
			try {
				obj.del();
			}
			catch (int e)
			{
				if (e == -1)
					cout << "EXEPTION: invalid index" << endl;
				if (e == 0)
					cout << "EXEPTION: no objects added yet" << endl;
			}
			break;

		case 5:
			try {
				obj.findStore();
			}
			catch (int e)
			{
				if (e == 0)
					cout << "EXEPTION: no objects added yet" << endl;
			}
			break;
		case 6:
			obj.flipFlag();
			break;
		case 7:
			obj.bestPrice();
			break;
		default:
			cout << "unknown" << endl;
		}
	}


}

int main()
{
	menu();

	return 0;
}