#include <iostream>
using namespace std;

int main(void)
{
    int num=10;
    int i=0;

    cout<<"true : "<<true<<endl;
    cout<<"false : "<<false<<endl;

    while(true)
    {
        cout<<i++<<' ';
        if(i>num)
            break;
    }
    cout<<endl;
    //0과1은 true false가 아니다 변환되어 출력되는 것이다.
    cout<<"sizeof 1: "<<sizeof(1)<<endl;
    cout<<"sizeof 0: "<<sizeof(0)<<endl;
    cout<<"sizeof true: "<<sizeof(true)<<endl;
    cout<<"sizeof false: "<<sizeof(false)<<endl;

    return 0;
}