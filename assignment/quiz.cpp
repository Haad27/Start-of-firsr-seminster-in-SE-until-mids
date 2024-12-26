#include <iostream>
#include <string>
using namespace std;

int main() {
    int score = 0;
    string answer;

    cout << "Welcome to the C++ Programming Quiz!\n";
    cout << "Please answer the following questions:\n\n";

    // Question 1
    cout << "1. What does 'cout' stand for in C++?\n";
    cout << "   a) Character Output\n   b) Console Output\n   c) Common Output\n   d) Computer Output\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == "b" || answer == "B") {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Incorrect. The correct answer is b) Console Output.\n";
    }

    // Question 2
    cout << "\n2. Which of the following is the correct way to declare a pointer in C++?\n";
    cout << "   a) int ptr;\n   b) int *ptr;\n   c) int &ptr;\n   d) int @ptr;\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == "b" || answer == "B") {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Incorrect. The correct answer is b) int *ptr;\n";
    }

    // Question 3
    cout << "\n3. What is the purpose of the 'using namespace std;' statement?\n";
    cout << "   a) It creates a new namespace\n   b) It deletes the std namespace\n";
    cout << "   c) It allows use of names from the std namespace without std:: prefix\n";
    cout << "   d) It includes the iostream library\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == "c" || answer == "C") {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Incorrect. The correct answer is c) It allows use of names from the std namespace without std:: prefix.\n";
    }

    // Display final score
    cout << "\nQuiz completed! Your score: " << score << " out of 3.\n";

    return 0;
}
