#include <iostream>
using namespace std;

int main()
{
    int num, result;
    result = 0; // Initialize result for each new number
    cout << " enter a positive integer ";
    cin >> num;
     // Input validation
        if (num < 0)
        {
            cout << "Please enter a positive integer (0 to exit )" << endl;
            
        }


    do
    {

       
        while (num != 1)
        {
            if (num % 2 == 0)
            {
                num = num / 2; // If even, divide by 2
            }
            else
            {
                num = 3 * num + 1; // If odd, multiply by 3 and add 1
            }

            cout << num << " -> "; // Print each number in the sequence
            result++;              // Increment the sequence length counter
        }
        cout << "\n"
             << "The length of the sequence is " << result << endl; // Print sequence length (including initial number)
        result = 0;                                                 // Initialize result for each new number
        cout << " enter a positive integer (0 to exit )";
        cin >> num;
        // Ask user if they want to continue
    } while (num != 0); // Continue loop unless user enters 0

    // Exit message
    cout << "Thank you for using the Collatz conjecture calculator!" << endl;
    return 0;
}
