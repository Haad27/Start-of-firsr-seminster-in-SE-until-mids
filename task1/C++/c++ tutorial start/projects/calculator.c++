// #include <iostream>
// using namespace std;

// int main (){
//     int x;
//     int y;
 
//     cout<<"type a number";
//     cin>>x;
//     cout<<"type another number";
//     cin>>y;
//     int sum=x+y;
//     int negative=x-y;
//     int multiple=x*y;
//     double devide=x/y;
//     cout <<"you sum is: "<<sum<<endl ;
//     cout <<"you multi is: "<<multiple<<endl ;
//     cout <<"you sub is: "<<negative<<endl ;
//     cout <<"you deveide is: "<<devide <<endl;


    
//  return 0 ;   
// };

# include <iostream>
using namespace std;
int main() {
  char op;
  float num1, num2;
  cout << "Enter operator: +, -, *, /: ";
  cin >> op;
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;
  switch(op) {


    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;
    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;
    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;
    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;
    default:
    
      // If the operator is other than +, -, * or /, error message is shown
      
      cout << "Error! operator is not correct";
      break;
  }
  return 0;
}