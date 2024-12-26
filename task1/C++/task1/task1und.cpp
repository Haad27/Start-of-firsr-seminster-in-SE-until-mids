#include <iostream>
using namespace std;

int main() {
    int num1, num2, i;

    // Get input from the user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Make sure num1 is smaller than num2
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
        // swap ( num1,num2)
    }

    cout << "Prime numbers between " << num1 << " and " << num2 << " are: ";

    // Check each number from num1 to num2
    do {
        // Assume the number is prime at first
        bool isPrime = true;

        // Check if num1 is less than 2 (smallest prime number)
        if (num1 < 2) {
            isPrime = false;
        }
        else {
            // Check if num1 is divisible by any number from 2 to num1-1
            for (i = 2; i < num1; i++) {
                if (num1 % i == 0) {
                    isPrime = false;
                    break;  // No need to check further
                }
            }
        }

        // If num1 is prime, print it
        if (isPrime) {
            cout << num1 << " ";
        }

        // Move to the next number
        num1++;

    } while (num1 <= num2);

    cout << endl;

    return 0;
}
