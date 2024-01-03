#ifndef __BANKINGSYSTEMVER02_H__
#define __BANKINGSYSTEMVER02_H__

#include <iostream>
#include <cstring>

const int NAME_LEN = 20;

int Start(void);
void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAllAccInfo(void);

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

class Account {
public:
	Account(int ID, int money, char* name);
	int GetAccID();
	void Deposit(int money);
	int Withdraw(int money);
	void ShowAccInfo();
	~Account();
private:
	int accID;
	int balance;
	char* cusName;
	
};



#endif