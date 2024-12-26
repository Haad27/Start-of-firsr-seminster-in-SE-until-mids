#include <iostream>

using namespace std;

int main()
{
    int number;
    while (true)
    {
        cout << "enter age"<<endl;
        cin >> number;

        if (number == 0)
        {
            break;
        }
        if (number >= 10)
    {
        cout << "you have lived a century";
    }
    else if (number >= 5)
    {
        cout << "AARP here i come ";
    }
    else
    {
       cout<< "you are still a chicken";
    }
    }
    
}