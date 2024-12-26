#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter a 5-digit number: ";
    cin >> number;

    int d1 = number / 10000;
    int d2 = (number / 1000) % 10;
    int d3 = (number / 100) % 10;
    int d4 = (number / 10) % 10;
    int d5 = number % 10;

    cout << "Original number: " << number << endl;
    cout << "Reversed order: " << d5 << d4 << d3 << d2 << d1 << endl;

    if (d1 % 2 == 1 || d2 % 2 == 1 || d3 % 2 == 1 || d4 % 2 == 1 || d5 % 2 == 1)
    {
        d1 = d1 % 2 == 1 ? d1 - 1 : d1;
        d2 = d2 % 2 == 1 ? d2 - 1 : d2;
        d3 = d3 % 2 == 1 ? d3 - 1 : d3;
        d4 = d4 % 2 == 1 ? d4 - 1 : d4;
        d5 = d5 % 2 == 1 ? d5 - 1 : d5;
    }

    cout << "Final result: " << d5/2 << d4/2 << d3/2 << d2/2 << d1/2 << endl;

    return 0;
}
