#include <iostream>

using namespace std;

int main()
{
    int wages,hours,tax,netpay,incometax,total;

    cout << "enter your daily wages , hours , tax";
    cin>> wages >> hours>> tax;

    total= wages*hours ;
    incometax = (tax / 100)* total;
    netpay = total-incometax;


    cout << "tota ampunt is "<< total;
}