#include <iostream>

using namespace std;

int main()
{ 
    // variables
    int d1, d2, d3, d4, d5;

    cout << "enter a 5 digit number :" ;
    // Read each digit separately
    cin >> d1 >> d2 >> d3 >> d4 >> d5;

    cout << "original digit : " << d1 << d2 << d3 << d4 << d5 << endl;

    cout << "reversed order : " << d5 << d4 << d3 << d2 << d1 << endl;
    
    // Declare variables to store the results
    int result1, result2, result3, result4, result5;

    // Check if any digit is odd
    if ( d5%2==1 || d4%2==1 || d3%2==1 || d2%2==1 || d1%2==1 )
    {
       // If a digit is odd, subtract 1 to make it even
       // Otherwise, leave it unchanged
       d1 = d1 % 2 == 1 ? d1 - 1 : d1;
       d2 = d2 % 2 == 1 ? d2 - 1 : d2;
       d3 = d3 % 2 == 1 ? d3 - 1 : d3;
       d4 = d4 % 2 == 1 ? d4 - 1 : d4;
       d5 = d5 % 2 == 1 ? d5 - 1 : d5;
    }
    // Divide each digit by 2 and store the results
    result1 = d1 / 2;
    result2 = d2 / 2;
    result3 = d3 / 2;
    result4 = d4 / 2;
    result5 = d5 / 2;
    // Display the final result
    cout << "final result :" << result1 << result2 << result3 << result4 << result5 << endl;
    return 0;
}
