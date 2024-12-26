#include <iostream>
using namespace std;

int main()
{

    int year, number;
    cout << "enter a 4 digit year " << endl;

    cin >> year;

    if (year > 1000 && year < 9999)
    {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        {
            cout << "it is a leap year " << endl;
        }
        else
        {
            cout << "it is not a leap year " << endl;
        }
        cout << "enter the number of next years you want ot know " << endl;
        cin >> number;

        for (int i = 1; i <= number; i++)
        {
            int z = year + i;
            cout << "the next " << number << " years are : " << year + i << endl;
            if (z % 4 == 0 && z % 100 != 0 || z % 400 == 0)
            {
                cout << "it is a leap year " << endl;
            }
            else
            {
                cout << "it is not a leap year " << endl;
            }
        }
    }
    else
    {
        cout << "not 4 digit formula";
    }
}