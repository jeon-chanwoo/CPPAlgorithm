#include <iostream>

int main(void)
{
    int a, b, c, d, e;

    std::cout<<"1번째 정수 입력 : ";
    std::cin>>a;

    std::cout<<"2번째 정수 입력 : ";
    std::cin>>b;
    
    std::cout<<"3번째 정수 입력 : ";
    std::cin>>c;
    
    std::cout<<"4번째 정수 입력 : ";
    std::cin>>d;
    
    std::cout<<"5번째 정수 입력 : ";
    std::cin>>e;

    int sum = a+b+c+d+e;
    std::cout<<"합계 :"<<sum<<std::endl;

}