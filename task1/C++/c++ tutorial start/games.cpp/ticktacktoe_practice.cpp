#include <iostream>
using namespace std;

void mainboard(char board[3][3])
{
    cout << "\n------------\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "| ";
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j] << "| ";
        }
        cout << "\n------------\n";
    }
}
bool winner(char board[3][3], char player)
{
    for (int i = 0; i < 3; i++)
    {
        // check to see any win in the row
        if (board[i][1] == player && board[i][2] == player && board[i][3] == player)
        {
            return true;
        }
        // check to see if any win ni coloumn
        else if (board[1][i] == player && board[2][i] == player && board[3][i] == player)
        {
            return true;
        }
    }
    // checking the diagonal
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;
    return false;
}
int main()
{

    char board[3][3] = {{' ', ' ', ' '},
                        {' ', ' ', ' '},
                        {' ', ' ', ' '}};

    char player = 'X';
    int row, col;
    int turn;

    cout << "wellcome to tick tack toe";
    for (int i = 0; i < 9; i++)
    {
        mainboard(board);

        while (true)
        {
            cout << "player  :" << player << endl;
            cout << "enter row (0,2) and coloumn (0,2)" << endl;
            cin >> row >> col;
            // ' ' resperent empty space
            // with ! = ' ' it means if it is not empty meaning it is filled
            // it is mjust to put space in '' to ' ' to make it this function
            if (board[row][col] != ' ' || row < 0 || row > 2 || col < 0 || col > 2)
            {
                cout << "enter valid number ";
            }
            else
            {
                break;
            }
        }
        board[row][col] = player;

        if (winner(board, player))
        {
            mainboard(board);
            cout << "Player " << player << " wins!\n";
            break;
        }

        if (player == 'X')
		{
			player = 'O';
		}
		else
		{
			player = 'X';
		}

        mainboard(board);
    }
}