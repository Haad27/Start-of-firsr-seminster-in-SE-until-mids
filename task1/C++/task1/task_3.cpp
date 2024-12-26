#include <iostream>
using namespace std;

int main()
{
    int num, rev, x;

    do
    {
        rev = 0; // Reset rev for each new number
        cout << "Enter the number you want to see if it is a palindrome" << endl;
        cin >> num;
        x = num; // Store original number in x

        // Reverse the number
        while (num > 0)
        {
            int digit = num % 10; // Get the last digit
            num = num / 10; // Remove the last digit
            rev = rev * 10 + digit; // Add digit to reversed number
        }

        // Check if the number is a palindrome
        if (rev == x)
        {
            cout << "The number " << x << " is a palindrome" << endl;
        }
        else
        {
            cout << "The number " << x << " is not a palindrome" << endl;
        }

    } while (rev != x); // Continue loop until a palindrome is found

    cout << "Congratulations! You found a palindrome." << endl;
    return 0;
}
