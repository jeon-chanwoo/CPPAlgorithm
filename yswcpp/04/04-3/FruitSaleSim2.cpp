#include <iostream>
#include "FruitSaleSim2.h"

using namespace std;

FruitSeller::FruitSeller(int price, int num, int money) 
	: APPLE_PRICE(price), numOfApples(num), myMoney(money) {}


int FruitSeller::SaleApples(int money)
{
	int num = money / APPLE_PRICE;
	numOfApples -= num;
	myMoney += money;
	return num;
}

void FruitSeller::ShowSaleResult() const
{
	cout << "남은 사과 : " << numOfApples << endl;
	cout << "판매 수익 : " << myMoney << endl << endl;
}

FruitBuyer::FruitBuyer(int money)
	: myMoney(money), numOfApples(0) {}

void FruitBuyer::BuyApples(FruitSeller& seller, int money)
{
	numOfApples += seller.SaleApples(money);
	myMoney -= money;
}

void FruitBuyer::ShowBuyResult() const
{
	cout << "현재 잔액 : " << myMoney << endl;
	cout << "사과 개수 : " << numOfApples << endl << endl;
}
