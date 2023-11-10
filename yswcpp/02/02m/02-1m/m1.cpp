#include <iostream>
using namespace std;


void pnum(int &num);
void rev(int &num);
int main(void)
{
    int num1;
    cin>>num1;
    cout<<endl;
    pnum(num1);
    cout<<num1<<endl;
    rev(num1);
    cout<<num1<<endl;

    return 0;
}

void pnum(int &num)
{
    num += 1;
}

void rev(int &num)
{
    num *= (-1);
}