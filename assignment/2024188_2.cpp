#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Declare variables
    double wage, hours, tax, net_pay, income_tax, total;

    // input to enter hourly wage
    cout << "enter  your wage :" << endl;
    cin >> wage;

    // input to enter hours worked
    cout << "enter  your hours :" << endl;
    cin >> hours;

    // input to enter tax rate 
    cout << "enter your tax (in percentage): " << endl;
    cin >> tax;

    // Calculate total gross pay
    total = wage * hours;

    // Calculate income tax
    income_tax = (tax / 100) * total;

    // Calculate net pay by subtracting income tax from total gross pay
    net_pay = total - income_tax;

    // Display the calculated net pay
    cout << "Net Pay :  " << net_pay << endl;

    return 0; 
}
