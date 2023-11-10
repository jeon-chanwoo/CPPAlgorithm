#include <iostream>
using namespace std;

int main(void)
{
    int arr[3] = {1,3,5};
    int &ref1=arr[0];// 참조자는 선언하는 동시에 누군가를 참조
    int &ref2=arr[1];
    int &ref3=arr[2];

    cout<<ref1<<endl;
    cout<<ref2<<endl;
    cout<<ref3<<endl;
    return 0;
}