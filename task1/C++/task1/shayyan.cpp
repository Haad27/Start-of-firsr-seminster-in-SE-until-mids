
#include <iostream>
using namespace std;

int main()
{
    int myYear;

    int myChoice;

    cout
        << "Welcome!"
        << "\n";

    cout
        << "A leap year has 366 days (the extra day is the 29th of February), and it comes after every four years"
        << "\n"; // Loop will continue until a valid input is given.

    for(;;){

        cout << "Kindly Enter A Year (Must Be of 4 Digits): :";

    cin >> myYear;
    if (myYear >= 9999)
    {

        cout << "Invalid Input! The Year Is Not A 4 Digit Number." << "\n"
             << "Kindly Enter A 4 Digit Number For A Year.";
             break;
    }else{
        cout << "it is a four digit number ";
    }

    cin >> myYear;
    }
    
}
