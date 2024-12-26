#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long number;
    cout << "Enter a number: ";
    cin >> number;

    vector<int> digits;
    long long originalNumber = number;

    // Extract digits and store them in reverse order
    while (number > 0)
    {
        digits.push_back(number % 10);
        number /= 10;
    }

    // Print the digits in the original order
    cout << "The digits of " << originalNumber << " are:" << endl;
    for (int i = digits.size() - 1; i >= 0; i--)
    {
        cout << "Digit " << digits.size() - i << ": " << digits[i] << endl;
    }

    return 0;
}
