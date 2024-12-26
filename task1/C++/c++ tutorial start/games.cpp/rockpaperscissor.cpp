#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));  // Seed the random number generator

    string options[] = {"Rock", "Paper", "Scissors"};
    int userChoice, computerChoice;

    cout << "Let's play Rock Paper Scissors!" << endl;

    while (true) {
        cout << "\nEnter your choice:" << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissors" << endl;
        cout << "0. Quit" << endl;
        cout << "Your choice: ";
        cin >> userChoice;

        if (userChoice == 0) {
            cout << "Thanks for playing!" << endl;
            break;
        }

        if (userChoice < 1 || userChoice > 3) {
            cout << "Invalid choice. Please try again." << endl;
            continue;
        }

        userChoice--;  // Adjust to match array index

        computerChoice = rand() % 3;  // Generate random number 0-2

        cout << "You chose: " << options[userChoice] << endl;
        cout << "Computer chose: " << options[computerChoice] << endl;

        if (userChoice == computerChoice) {
            cout << "It's a tie!" << endl;
        } else if ((userChoice == 0 && computerChoice == 2) ||
                   (userChoice == 1 && computerChoice == 0) ||
                   (userChoice == 2 && computerChoice == 1)) {
            cout << "You win!" << endl;
        } else {
            cout << "Computer wins!" << endl;
        }
    }

    return 0;
}