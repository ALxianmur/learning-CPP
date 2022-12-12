#include"Account.h"
void Account::debit()
{
	int number = 0;
	cout << "please input the money you want to debit" << endl;
	cin >> number ;
	int bridge = 0;
	bridge = money;
	bridge -= number;
	if (bridge < 0)
		cout << "Debit amont exceeded account balabce." << endl;
	else
	{
		money = bridge;
		cout << "your present money is" << money << endl;
	}
 }