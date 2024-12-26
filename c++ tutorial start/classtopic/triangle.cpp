#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "enter the number of triangle length0";
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " *";
        }
        
        cout << endl;
    }
    // inverted 
    
     for (int i = 0; i <= x; i++)
    {
        for (int j = i-x; j <= 0; j++)
        {
            cout << " *";
        }
        
        cout << endl;
    }
}