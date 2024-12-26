#include <iostream>
using namespace std;

int main()
{
    int number;
    // user input
    cout << "enter number of 5 digit ";
    cin >> number;
    if (number >= 10000 && number <= 99999)
    {
        // Extract individual digits from the number
        int d1 = number / 10000;
        int d2 = (number / 1000) % 10;
        int d3 = (number / 100) % 10;
        int d4 = (number / 10) % 10;
        int d5 = (number % 10);
        // original number
        cout << "orginal number " << number << endl;

        // reversed number
        cout << "reversed  " << d5 << d4 << d3 << d2 << d1 << endl;

        // Display each digit divided by 2 (integer division)
        cout << "result " << d5 / 2 << d4 / 2 << d3 / 2 << d2 / 2 << d1 / 2 << endl;
    }
    else
    {
        cout << "not a 5 digit number ";
    }

    return 0;
}
