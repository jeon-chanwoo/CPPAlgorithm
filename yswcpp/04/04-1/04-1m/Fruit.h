#ifndef __FRUIT_H__
#define __FRUIT_H__

class FruitSeller
{
    public:
    void InitMembers(int price, int num, int money);
    int SaleApples(int money);
    void ShowSalesResult() const;
    
    private:
    int APPLE_PRICE;
    int numOfApples;
    int myMoney;
};

class FruitBuyer
{
    public:
    void InitMembers(int money);
    void BuyApples(FruitSeller &seller, int money);
    void ShowBuyResult() const;

    private:
    int myMoney;
    int numOfApples;
};

#endif