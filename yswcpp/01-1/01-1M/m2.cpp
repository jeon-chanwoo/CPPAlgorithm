#include <iostream>

int main(void)
{
    char name[100];
    char phone[100];

    std::cout<<"이름을 입력해 주세요"<<std::endl;
    std::cin>>name;
    

    std::cout<<"전화번호를 입력해 주세요"<<std::endl;
    std::cin>>phone;

    std::cout<<"이름은 "<<name<<"입니다."<<std::endl;
    std::cout<<"번호는 "<<phone<<"입니다."<<std::endl;
}