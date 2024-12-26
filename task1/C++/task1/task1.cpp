#include <iostream>
using namespace std;

int main()
{

    int num1, num2, x;
    cout << "enter first num " << endl;
    cin >> num1;

    cout << "enter second num " << endl;
    cin >> num2;
    // cout << 2 << " " << 3 << " " << 5 << " " << 7 << " ";
    
    do
    {
       if (num1==2||num1==3||num1==5||num1==7)
       {
        cout << num1<<" " ;
       }
       
        if (num1 % 2 == 1 && num1 % 3 != 0 && num1 % 5 != 0 && num1 % 7 != 0 && num1 % 9 != 0 && num1 % 11 != 0)
        {
            cout << " " << num1 << "  ";
        }
        num1 = num1 + 1;

    } while (num1 < num2);
}
