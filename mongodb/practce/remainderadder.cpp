#include <iostream>

using namespace std;

// int main()
// {
//     int num = 1;
//     while (num <= 20)
//     {

//             if (num % 2 == 0)
//             {
//                 cout << num << endl;
//             }
//             num++;
//         }
// }
// int main()
// {
//     int answer;
//     cin >> answer;
//     do
//     {
//         cout << "guess number betwwen 10" << endl;
//         cin >> answer;
//     } while (answer != 5);

//     cout << "correct answer";
// }
#include <iostream>
using namespace std;

int main()
{
    int number,digit;
    int sum = 0,rev=0;

    cout << "Enter a number: ";
    cin >> number;

    int originalNumber = number;

    while (number > 0)
    {

         digit = number % 10;

        sum += digit;

        number = number / 10;
        rev = rev * 10 +digit;
    }

    cout << "The sum of digits in " << originalNumber << " is: " << sum << endl;
    cout << "The rev of digits in " << originalNumber << " is: " << rev << endl;
    // cout << "The rev of digits in " << originalNumber << " is: " << digit << endl;

    return 0;
}
// #include <iostream>
// using namespace std;

// int main(){
// int num;
// cin >> num;
//   for (int i = 1; i <= num; i++)
//   {
//     for (int j = 0; j < i; j++)
//     {
//         cout << i + j << endl; 
//     }
    
//   }
  
// }