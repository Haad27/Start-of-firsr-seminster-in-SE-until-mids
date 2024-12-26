#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;

void two_player_tick_tack_tow()
{
   string p1;
   string p2;
   for (;;)
   {

      cout << "player 1  ";
      cout << "enter rock paper or sciccors :  ";
      cin >> p1;
      cout << "player 2  ";
      cout << "enter rock paper or sciccors :  ";
      cin >> p2;
      if (p1 == p2)
      {
         cout << "tie" << endl;
      }
      else if (p1 == "scissors" && p2 == "rock" || p1 == "paper" && p2 == "scissors" || p1 == "rock" && p2 == "paper")
      {
         cout << "p2 won " << endl;
      }
      else if (p1 == "scissors" && p2 == "paper" || p1 == "paper" && p2 == "rock" || p1 == "rock" && p2 == "scissors")
      {
         cout << "p1 won " << endl;
      }
      else
      {
         cout << "error" << endl;
      }
   }
}
void computer()
{
   srand(time(0));
   vector<string> RPS = {"rock", "paper", "scissors"};
   string p1, cmop;
   cout << "player 1    " << endl;
   cout << "enter rock paper or sciccors  :  " << endl;
   sleep(2);
   cin >> p1;
   cmop = RPS[rand() % RPS.size()];
   cout << "player 1 choose : " << p1 << endl;
   sleep(2);
   cout << "the computer choose : " << cmop << endl;
   sleep(2);

   if (p1 == cmop)
   {
      cout << "tie" << endl;
   }
   else if (p1 == "scissors" && cmop == "rock" || p1 == "paper" && cmop == "scissors" || p1 == "rock" && cmop == "paper")
   {
      cout << "computer won won " << endl;
   }
   else if (p1 == "scissors" && cmop == "paper" || p1 == "paper" && cmop == "rock" || p1 == "rock" && cmop == "scissors")
   {
      cout << "p1 won " << endl;
   }
   else
   {
      cout << "error" << endl;
   }
}

int main()
{
   for (;;)
   {
      int decision{0};
      cout << "which game play you want to play " << endl
           << "1 : play with computer " << endl
           << "2 : play with a friend " << endl;
      cin >> decision;
      switch (decision)
      {
      case 1:
         computer();
         break;
      case 2:
         two_player_tick_tack_tow();
         break;

      default:
         break;
      }
   }
}