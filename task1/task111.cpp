#include <iostream>

using namespace std;

int main()
{
    int num1, num2, x;
    cout << "enter first number ";
    cin >> num1;
    cout << "enter second number ";
    cin >> num2;

    if (num1 > num2)
    {
        swap(num1, num2);
    }

    do
    {
        bool prime = true;

        if (num1 < 2)
        {
            prime = false;
        }else{
        for (int i = 2; i < num1; i++)
        {
            if (num1 % i == 0)
            {
                prime = false;
                break;
            }
        }
        }
        if (prime = true)
        {
            cout << num1 << " ";
        }
        num1++;
        

    } while (num1 < num2);
}