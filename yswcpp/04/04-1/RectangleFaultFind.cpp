#include<iostream>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

int main(void)
{
    Point pos1;
    if(!pos1.InitMembers(-2,4))
        cout<<"초기화 실패"<<endl;
    if(!pos1.InitMembers(2,4))
        cout<<"초기화 실패"<<endl;

    Point pos2;
    if(!pos2.InitMembers(5,9))\
        cout<<
}