#include <iostream>

int main(void)
{
    int a;
    std::cout<<"출력할 구구단을 입력해 주세요"<<std::endl;
    std::cin>>a;

    for(int i=1;i<10;i++)
    {
        std::cout<<a<<" * "<<i<< " = "<<a*i<<std::endl;
    }    
}