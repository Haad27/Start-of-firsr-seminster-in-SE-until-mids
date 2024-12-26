#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    for (int i = -radius; i <= radius; i++) {
        for (int j = -radius; j <= radius; j++) {
            if (sqrt(j*j + i*i) <= radius) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
