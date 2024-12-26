#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int alldigits, digit, num, rev = 0, sum = 0;

    cout << "enter any num ";
    cin >> num;

    while (num > 0)
    {
        digit = num % 10;
        num = num / 10;
        rev = rev * 10 + digit;
        cout << digit << endl;
    }

    cout << "reverse order " << rev << endl;

   
    
}