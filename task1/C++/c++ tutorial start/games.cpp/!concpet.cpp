#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int count = 0;

    cout << "Enter a sentence: ";
    getline(cin, input);

    for (char c : input) {
        // if (c!= ' ')
        if (c == ' ') {
            count++;
        }
    }

    cout << "Number of non-space characters: " << count << endl;

    return 0;
}
