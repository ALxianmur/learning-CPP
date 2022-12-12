
#include"Account.h"
 void Account::receive()
{
	if (Account::money >= 0)
		cout<< Account::money<<endl;
	else
		cout << "error:the money is ineffective" << endl;
}