#include "BankingSystemVer02.h"
#pragma warning(disable:4996)
Account* accArr[100];
int accNum = 0;
using namespace std;

Account::Account(int ID, int money, char* name) : accID(ID), balance(money){
	cusName = new char[strlen(name) + 1];
	strcpy(cusName, name);
}

int Account::GetAccID() { return accID; }

void Account::Deposit(int money) { balance += money; }

int Account::Withdraw(int money){
	if (balance < money)
		return 0;

	balance -= money;
	return money;
}

void Account::ShowAccInfo(){
	cout << "계좌ID" << accID << endl;
	cout << "이 름" << cusName << endl;
	cout << "잔 액" << balance << endl;
}

Account::~Account(){delete[] cusName;}

int Start(void) {
	int choice;

	while (1) {
		ShowMenu();
		cout << "선택 : "; cin >> choice;
		cout << endl;

		switch (choice) {
		case MAKE:
			MakeAccount();
			break;
		case DEPOSIT:
			DepositMoney();
			break;
		case WITHDRAW:
			WithdrawMoney();
			break;
		case INQUIRE:
			ShowAllAccInfo();
			break;
		case EXIT:
			for (int i = 0; i < accNum; i++)
				delete accArr[i];
			return 0;

		default:
			cout << "Illegal selection.." << endl;
		}
	}
	return 0;
}

void ShowMenu(void) {
	cout << "-----Menu-----" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입 금 : " << endl;
	cout << "3. 출 금 : " << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}

void MakeAccount(void) {
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[계좌개설]" << endl;
	cout << "계좌ID : "; cin >> id;
	cout << "이 름 : "; cin >> name;
	cout << "입금액 : "; cin >> balance;
	cout << endl;

	accArr[accNum++] = new Account(id, balance, name);
}

void DepositMoney(void) {
	int money;
	int id;
	cout << "[입 금]" << endl;
	cout << "계좌ID : "; cin >> id;
	cout << "입금액 : "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->GetAccID() == id) {
			accArr[i]->Deposit(money);
			cout << "입금완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;
}

void WithdrawMoney(void) {
	int money;
	int id;
	cout << "[출 금]" << endl;
	cout << "계좌ID : "; cin >> id;
	cout << "출금액 : "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->GetAccID() == id) {
			if (accArr[i]->Withdraw(money) == 0) {
				cout << "잔액부족" << endl << endl;
				return;
			}
			cout << "출금완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;
}

void ShowAllAccInfo(void) {
	for (int i = 0; i < accNum; i++) {
		accArr[i]->ShowAccInfo();
		cout << endl;
	}
}