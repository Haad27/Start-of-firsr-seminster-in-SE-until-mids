#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // variables 
    int i, a, b;
    int u = 3;
    int p = 4;
   //getting input
    cout << "Enter value of i, a and b: ";
    cin >> i >> a >> b;

    // Calculate numerator 
    int numerator = sqrt(u * pow(i, a / b) * (i * i - 1));

    // Calculate denominators 
    int denominator = sqrt(p * i - 2)+sqrt(p * i - 1);

    // Calculate the final result
    double result =(numerator) / denominator;

    cout << "Result: " << result;

    return 0;
}
