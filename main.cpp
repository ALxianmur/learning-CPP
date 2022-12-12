#include"Account.h"
extern void test();
int main()
{
	int choice_number = 0;
	int object_number = 0;
	int initial_1 = 0, initial_2 = 0;
	int money_print = 0;
	cout << "please input the initial number for two account" << endl;
	cin >> initial_1 >> initial_2;
	Account account1(initial_1);
	Account account2(initial_2);
	

	while (1)
	{	
		cout << "choose the account you want to operate" << endl;
		cout << "1.account1" << endl;
		cout << "2.account2" << endl;
		cin >> object_number;
		if (object_number ==1)
			while (1)
			{
				cout << "account1" << endl;
				cout << "please choose the service£¨input the corrsponding number£©" << endl;
				cout << "1.checek your balance" << endl;
				cout << "2.saving" << endl;
				cout << "3.withdraw" << endl;
				cin >> choice_number;
				switch (choice_number)
				{
				case 1:  money_print = account1.Account::getBalance();
						 cout <<"the present money is"<< money_print << endl;
						 break;								  //check the balance
				case 2:  account1.Account::credit(); break;	  //save money
				case 3:  account1.Account::debit(); break;	  //withdraw money
				}
				cout << endl;
				cout << "1.continue the operation on this account" << endl;
				cout << "2.exit the operation on this account" << endl;
				cin >> choice_number;
				if (choice_number == 1)
					continue;
				else
					break;
			}
		else while (1)
		{
			cout << "account2" << endl;
			cout << "please choose the service£¨input the corrsponding number£©" << endl;
			cout << "1.checek your balance" << endl;
			cout << "2.saving" << endl;
			cout << "3.withdraw" << endl;
			cin >> choice_number;
			switch (choice_number)
			{
			case 1:  account2.Account::getBalance(); break; //check the balance
			case 2:  account2.Account::credit(); break;		//save money
			case 3:  account2.Account::debit(); break;		//withdraw money
			}
			cout << endl;
			cout << "1.continue the operation on this account" << endl;
			cout << "2.exit the operation on this account" << endl;
			cin >> choice_number;
			if (choice_number == 1)
				continue;
			else
				break;
		}
		cout << "1.continue to operate other account" << endl;
		cout << "2.quit" << endl;
		cin >> choice_number;
		if (choice_number == 1)
		{ 
			cout << "-----------------this is the dividing line----------------" << endl;
			continue;
		}
		else
			break;

	}
}