#include <iostream>
using namespace std;

int main()
{
  int row, col;
  cin >> row >> col;

  for (int i = 1; i <= row; i++)
  {
    for (int j = 1; j <= col; j++)
    {
      if (i==1 || j==1 || row==i ||col==j)
      {
       cout << " *";
      }else{
        cout << "  ";
      }

    }

      cout << endl;

  }

  int x;

  cin >> x;

  for (int i = 1; i <= x; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      if (j==i || i==x || j==1)
      {
        cout << " *";
      }else{
        cout << "  ";
      }

    }
    cout <<endl;
  }
}