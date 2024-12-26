#include <iostream>
using namespace std;

int main() {
    int y = 0, z = 0;
    string result;
    int x = 1 ;
    while (x<=10) {
        cout << "Enter result (pass/fail) or  to quit: ";
        cin >> result;

        if (result == "q") {
            break;  // Exit the loop if the user enters 'q'
        } else if (result == "pass") {
            y++;
        } else if (result == "fail") {
            z++;
        } else {
            cout << "Invalid input. Please enter 'pass' or 'fail'." << endl;
        }
        x=x+1;

    }
        cout << "Passed: " << y << ", Failed: " << z << endl;

    return 0;
}
