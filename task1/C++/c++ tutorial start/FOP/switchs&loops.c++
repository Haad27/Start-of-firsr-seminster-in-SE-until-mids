
// #include <iostream>
// using namespace std;

// int main (){
// int day = 4;
// switch (day) {
//   case 1:
//     cout << "Monday";
//     break;
//   case 2:
//     cout << "Tuesday";
//     break;
//   case 3:
//     cout << "Wednesday";
//     break;
//   case 4:
//     cout << "Thursday";
//     break;
//   case 5:
//     cout << "Friday";
//     break;
//   case 6:
//     cout << "Saturday";
//     break;
//   case 7:
//     cout << "Sunday";
//     break;
//       case 8:
//     cout << "Today is Saturday";
//     break;
//   case 9:
//     cout << "Today is Sunday";
//     break;
//   default:
//     cout << "Looking forward to the Weekend";

// }
// }





// // }};


#include <iostream>
using namespace std;


int main (){
  char  x;
  cout << "if you want to do addition or subtraction or multiplactication write down";
  cin >> x;
  switch (x)
  {
  case '+' :
    cout << "enter two numbers you want to add";
    
    break;
  case '*':
    cout << "enter two numbers you want to multiply";
    break;
  case '-':
    cout << "enter two numbers you want to minus";
    break;
  case '/':
    cout << "enter two numbers you want to divide";
    break;
  default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  }
  return 0;

};