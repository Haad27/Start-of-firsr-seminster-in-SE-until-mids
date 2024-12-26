#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    int x = num1;

    // Prompt the user to enter the first number
    cout << "enter first number ";
    cin >> num1;

    // Prompt the user to enter the second number
    cout << "enter second number ";
    cin >> num2;

    cout << "The prime numbers in the range of " << x << "and " << num2 << " :" << endl;

    // Ensure that num1 is smaller than num2
    if (num1 > num2)
    {
        swap(num1, num2);
    }

    // Handle the case where num1 is 0 or num2 is 1
    if (num1 == 0 || num2 == 1)
    {
        num1 = 2;
    }

    do
    {
        // Assume the current number is prime
        bool prime = true;

        // Check for divisors from 2 to num1 - 1
        for (int i = 2; i < num1; i++)
        {
            // If num1 is divisible by i, it's not prime
            if (num1 % i == 0)
            {
                prime = false;
                break; // Exit the loop since we found a divisor
            }
            else
            {
                // If no divisor is found, the number is still prime
                prime = true;
            }
        }

        // If the number is prime, print it
        if (prime == true)
        {
            cout << num1 << " ";
        }

        // Move to the next number
        num1++;

    } // Continue until num1 is greater than num2
    while (num1 < num2);

    return 0;
}
