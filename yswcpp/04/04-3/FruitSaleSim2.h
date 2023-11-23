#ifndef __FRUITSALESIM2_H__
#define __FRUITSALESIM2_H__

class FruitSeller
{
public:
	FruitSeller(int price, int num, int money);
	int SaleApples(int money);
	void ShowSaleResult() const;
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;
};

class FruitBuyer
{
public:
	FruitBuyer(int money);
	void BuyApples(FruitSeller& seller, int money);
	void ShowBuyResult() const;
private:
	int myMoney;
	int numOfApples;
};

#endif
