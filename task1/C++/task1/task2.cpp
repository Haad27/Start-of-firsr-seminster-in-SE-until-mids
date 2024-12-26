#include <iostream>
using namespace std;

int main()
{

    int n, result;
    cout << "enter a number (0 to exit)" << endl;
    cin >> n;
    cout << n << " ";
    do
    {
        while (n >= 1)
        {
            if (n % 2 == 0)
            {
                cout << n / 2 << " ";
            }
            if (n % 2 == 1)
            {
                cout << 3 * n + 1 << " ";
            }
            n--;
            result++;
        }
        cout << "enter a number (0 to exit) " << endl;
        cin >> n;
        cout << n << " " ;

    } while (n != 0);
    cout << "sequence is "<<result<<endl;
}
