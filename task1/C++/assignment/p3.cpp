#include <iostream>

using namespace std;

int main()
{
    int num;
    int fivehundred = 0, hundred = 0, fifty = 0, ten = 0, five = 0, one = 0;

    cout << "enter in the range of RS 100 to RS 100000";
    cin >> num;

    if (num >= 100 || num <= 10000)
    {
        fivehundred = num / 500;
        num = num % 500;
        hundred = num / 100;
        num = num % 100;
        fifty = num / 50;
        num = num % 50;
        ten = num / 10;
        num = num % 10;
        one = num / 1;
        num = num % 1;

        cout << "500  " << fivehundred <<endl;
        cout << "100   " << hundred <<endl;
        cout << "50   " << fifty <<endl;
        cout << "10   " << ten <<endl;
    }
    else
    {
        cout << "invalid nummber";
    }
    
}