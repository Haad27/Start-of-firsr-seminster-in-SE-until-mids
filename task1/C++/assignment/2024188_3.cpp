#include <iostream>

using namespace std;

int main()
{
    //  variables
    int rupees; 
 
    int fivehundred = 0, hundred = 0, fifty = 0, ten = 0, five = 0, one = 0;

    // user input
    cout << "Enter rupees in range of RS 100 to RS 100000: ";
    cin >> rupees;

    // Check if within the specified range
    if (rupees >= 100 && rupees <= 100000)
    {
        // Calculate the number of 500 rupee notes
        fivehundred = rupees / 500;
        rupees %= 500;  // Update remaining amount

        // Calculate the number of 100 rupee notes
        hundred = rupees / 100;
        rupees %= 100;  // Update remaining amount

        // Calculate the number of 50 rupee notes
        fifty = rupees / 50;
        rupees %= 50;  // Update remaining amount

        // Calculate the number of 10 rupee notes
        ten = rupees / 10;
        rupees %= 10;  // Update remaining amount

        // Calculate the number of 5 rupee coins
        five = rupees / 5;
        rupees %= 5;  // Update remaining amount

        // Calculate the number of 1 rupee coins
        one = rupees / 1;
        rupees %= 1;  // Update remaining amount

        // output :: summary
        cout << "currency note " << "       " << ":number " << endl;
        cout << "500" << "                  :" << fivehundred << endl;
        cout << "100" << "                  :" << hundred << endl;
        cout << "50 " << "                  :" << fifty << endl;
        cout << "10 " << "                  :" << ten << endl;
        cout << "5  " << "                  :" << five << endl;
        cout << "1  " << "                  :" << one << endl;
    }
    else
    {
        cout << "Amount not in range" << endl;
    }

    return 0;  
}