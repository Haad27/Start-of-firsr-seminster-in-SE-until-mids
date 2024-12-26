#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int radious;

    cout << "enter radious" ;
    cin >> radious;

    for (int i = -radious; i <= radious; i++)
    {
        for (int j = -radious; j <= radious; j++)
        {
            if (sqrt(i*i + j*j)<=radious)
            {
              cout << "*";
            }else
            {
                cout << " ";
            }
            
            
        }
        cout << endl;
    }
    
}