#include <iostream>
using namespace std;
void rectange_square()
{
    int n;
    cout << "enter ";
    cin >> n;

    // for rectangle / square
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void triangle_first()
{
    int n;
    cout << "enter ";
    cin >> n;

    // triangle first quadrent
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void triangle_thirdquad()
{
    int n;
    cout << "enter ";
    cin >> n;

    // triangle third  quadrent
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void triangle_equal()
{

    // triangle second  quadrent
    int n;
    cout << "enter ";
    cin >> n;

    // triangle equilateral
    for (int i = 1; i <= n; i++)
    {
        for (int sp = i; sp <= n; sp++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void rectangele_holow()
{
    int n;
    cout << "enter ";
    cin >> n;

    // for hollow rectangle / square
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || i == n || j==n)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
void triangle_hollow()
{
    int n;
    cout << "enter ";
    cin >> n;

    // triangle first quadrent
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == 1 || j == 1 || j == i || i == n)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
int main()
{
 int n;
    cout << "enter ";
    cin >> n;

    // triangle first quadrent
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1  || i == n || j==n)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}