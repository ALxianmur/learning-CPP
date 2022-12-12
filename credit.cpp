#include"Account.h"
void Account::credit()
{	
	int  m = 0;
	cout << "plaese input the money you want to credit" << endl;
	cin >> m ;
	money += m;
	cout << "your present money is" << money << endl;
}