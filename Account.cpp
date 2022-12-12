#include"Account.h"
Account::Account(int object)
{
	while (object < 0)
	{
		cout << "error:the money is ineffective" << endl;
		cout << "please input the money again" << endl;
		cin >> object;
	}
	money = object;
	cout << "object is being created£¬the initial money=" << object << endl;
}