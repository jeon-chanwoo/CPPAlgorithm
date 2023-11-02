#include <iostream>

int main(void)
{
    int a=0;
    while(1)
    {
        std::cout<<"판매금액을 만원 단위로 입력(-1 to end): "<<std::endl;
        std::cin>>a;

        if(a>-1)
        {
            std::cout<<"이번 달 급여 : "<<50+(a*0.12)<<"만원"<<std::endl;
        }
        else if(a==-1)
        {
            std::cout<<"프로그램을 종료합니다."<<std::endl;
            break;
        }
    }
}