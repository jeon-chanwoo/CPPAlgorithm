#include <iostream>
#include "FruitSaleSim2.h"

using namespace std;

int main(void)
{
	FruitSeller seller(1000, 20, 0);
	FruitBuyer buyer(5000);
	buyer.BuyApples(seller, 2000);

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSaleResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();
	return 0;
}