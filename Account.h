#pragma once
#include <iostream>
using namespace std;
class Account				//Accoun funding
{
public:
	void credit();			//used for saving money
	void debit();			//used for withdrawing money
	int getBalance();		//return present money
	void receive();			//receive the initial money
	Account(int object);	//this is the constructor
private:
	int money = 0;			//money
}
;