#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows (odd number): ";
    cin >> n;

    if (n % 2 == 0) {
        n++; // Ensure n is odd
    }

    int spaces = n / 2;
    int stars = 1;

    // Upper half of the diamond
    for (int i = 1; i <= n / 2 + 1; i++)
    {
        // Print spaces
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }

        // Print stars
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        cout << endl;
        spaces--;
        stars += 2;
    }

    // Lower half of the diamond
    spaces = 1;
    stars = n - 2;

    for (int i = 1; i <= n / 2; i++)
    {
        // Print spaces
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }

        // Print stars
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        cout << endl;
        spaces++;
        stars -= 2;
    }

    return 0;
}
