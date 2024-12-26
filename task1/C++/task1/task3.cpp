#include <iostream>
using namespace std;

int main()
{
    int num, rev, digit;

    cout << "enter the number " << endl;
    cin >> num;
    int a = num;

    while (a > 0)
    {
        digit = a % 10;
        a = a / 10;
        rev = rev * 10 + digit;
    }

    cout << "reverse order " << rev << endl;

    if (rev == num )
    {
        cout << "it is a palindrome";
    }else{
        cout << "not a palindrome";
    }
    
}