#include <iostream>

using namespace std;

int collatz_sequence_length(int num) {
    int steps = 0;

    while (num != 1) {
        cout << num << " ";
        steps++;

        if (num % 2 == 0) {
            num /= 2;
        } else {
            num = 3 * num + 1;
        }
    }

    cout << endl;
    return steps;
}

int main() {
    int num;
    char choice;

    do {
        cout << "Enter a positive integer: ";
        cin >> num;

        if (num <= 0) {
            cout << "Please enter a positive integer.\n";
            continue;
        }

        int steps = collatz_sequence_length(num);
        cout << "Sequence length: " << steps << " steps\n";

        cout << "Do you want to continue (y/n)? ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}