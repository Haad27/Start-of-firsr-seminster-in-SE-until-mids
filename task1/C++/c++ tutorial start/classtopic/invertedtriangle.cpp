#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "enter the number of triangle length0";
    cin >> x;

    for (int row = 1; row <= x; row++)
    {
        for (int space = row; space <=x; space++)
        {
            cout << " ";
        }
        for (int j = 1; j <= row; j++)
        {
            cout << " *";
        }
        
        
        cout << endl;
    }
    
    
    }
