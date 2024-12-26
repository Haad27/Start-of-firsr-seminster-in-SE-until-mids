#include <iostream>
using namespace std;

int main()
{
    int j, i, sp;
    for (int i = 1; i <= 5; i++)
    {
        for (int sp = 1; sp <= 5 - i; sp++)
        {
            cout << "-";
        }

        for (int j = 1; j <= i; j++)
        {
            if ( j == 1 || i == j)
            {
                cout << " *";
            }else{
               cout << "  ";
            }
        }

        cout << endl;
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int sp = 2; sp <= i; sp++)
        {
            cout << "-";
        }
        for (int j = 5; j >= i; j--)
        {
            if (j==5||i==j)
            {
               cout << " *";
            }
            else{
                cout << "  ";
            }
           
        }

        cout << endl;
    }
}