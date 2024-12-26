#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string input;
    cout << "Enter a list of numbers: ";
    getline(cin, input);

    cout << "Original string: " << input << endl;

    // Reverse the string
    reverse(input.begin(), input.end());

    cout << "Reversed string: " << input << endl;

    return 0;
}
