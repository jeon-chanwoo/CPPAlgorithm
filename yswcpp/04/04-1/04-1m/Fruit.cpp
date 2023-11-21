#include <iostream>
#include "Fruit.h"
using namespace std;

void FruitSeller::InitMembers(int price, int num, int money)
{
    APPLE_PRICE = price;
    numOfApples = num;
    myMoney = money;
}

int FruitSeller::SaleApples(int money)
{
    if(money<0)
    {
        cout<<"잘못된 정보가 전달되어 판매를 취소합니다."<<endl;
    }

    int num=money/APPLE_PRICE;
    numOfApples-=num;
    myMoney+=money;
    return num;
}

void FruitSeller::ShowSalesResult() const
{
    cout<<"남은 사과 : "<<numOfApples<<endl;
    cout<<"팜내 수익 : "<<myMoney<<endl<<endl;
}

void FruitBuyer::InitMembers(int money)
{
    myMoney=money;
    numOfApples=0;
}

void FruitBuyer::BuyApples(FruitSeller &seller, int money)
{
    if(money<0)
    {
        cout<<"잘못된 정보가 전달되어 구매를 취소합니다."<<endl;
        return;
    }

    numOfApples+=seller.SaleApples(money);
    myMoney-=money;
}

void FruitBuyer::ShowBuyResult() const
{
    cout<<"현재 잔액 : "<<myMoney<<endl;
    cout<<"사과 개수 : "<<numOfApples<<endl<<endl;
}