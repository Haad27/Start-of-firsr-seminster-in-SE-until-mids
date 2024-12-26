
#include <iostream>
using namespace std;
#include <string>
void number_classfier(){

    int usernumber;

cout << "nmber classifier (even,odd, divisible by 3) "<< endl;

cout << "enter number: ";

cin >> usernumber;

// to find if it is even or add

if (usernumber % 2 ==1)

{

cout << usernumber <<" is odd"<< endl;}

else

{

cout << usernumber <<" is even" << endl;
}

// to find if is its multiple or not 
if (usernumber %3==0) {

cout << usernumber <<" is multiple of 3"<< endl;
}
else

{

cout << usernumber << "is not multiple of 3"<< endl;


}


}
void number_summer(){

float a,b;
cout << "enter the two numbers "<<endl;
cin >> a;
cin >> b;
cout << "sum of both variables are: "<<a+b<<endl;
}
void info(){
    string name, address,age; //name age and adreess display
cout<<"enter your name" <<endl;
cin>>name;
cout<<"enter your address"<<endl;
cin>>address;
cout<<"enter your age"<<endl;
cin >> age;
cout<< "your name is: " << name << endl << "your address is: " << address << endl;

 cout << "your age is : " << age << endl;

}
void area_calculator(){


double length, width, area;

cout << "Enter the length of the rectangle: ";

cin >> length;

cout << "Enter the width of the rectangle: ";

cin >> width;

area = length * width;

cout << "The area of the rectangle is: " << area << endl;

}
void circumference_calculator(){
  
double price, r, h;

double const pi =3.14; // Use const for constants

cout << "Enter the price of painting in Rs per sq.meter: " << endl;

cin>>price;

cout << "Enter the price of painting in Rs per sq.meter: "<<endl;

cin >> price;

cout << "Enter the radius: ";

cin >> r;
cout << "Enter the height: ";
cin >> h;

double area2;

double area;

double area1  = pi *r;
area = area1 + area2;

double prices;
prices = area * price;
area2 = pi*h; // Correct formula



cout << "The area of painting is: " << area << endl;

cout << "the cost is: " << prices;


}
 
int main() {
    int decision = 0;
for (;;) {
    string userInput;
    // cout << "Welcome to my program!" << endl;
    cout << "press start to continue or quit to end "<< endl ;
    cin >> userInput;
     if (userInput == "quit") {
            break;
        } else if (userInput != "start") {
            cout << "Invalid input. Please enter 'start' or 'quit'." << endl;
            continue;
        }


    cout << "Enter what program you want to execute:" << endl;
    cout << "1 for Number Classifier" << endl;
    cout << "2 for finding sum of 2 numbers" << endl;
    cout << "3 for printing the age, address and name" << endl;
    cout << "4 for finding circumference" << endl;
       cout << "5 for finding cost of painting a house" << endl;
    cin >> decision;

    switch (decision) {
        case 1:
            number_classfier();
            break;
        case 2:
            number_summer();
            break;
        case 3:
            info();
            break;
        case 4:
            circumference_calculator();
            break;
        case 5:
            circumference_calculator();
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
            break;
    }
    cout<<endl;
    }

    return 0;
}
// using whileloop 
// int main() {
//     int decision = 0;
//     string userInput;
//     bool continueProgram = true;

//     while (continueProgram) {
//         cout << "Press 'start' to continue or 'quit' to end: ";
//         cin >> userInput;

//         if (userInput == "quit") {
//             continueProgram = false;
//         } else if (userInput == "start") {
//             cout << "Enter what program you want to execute:" << endl;
//             cout << "1 for Number Classifier" << endl;
//             cout << "2 for finding sum of 2 numbers" << endl;
//             cout << "3 for printing the age, address and name" << endl;
//             cout << "4 for finding circumference" << endl;
//             cout << "5 for finding cost of painting a house" << endl;
//             cin >> decision;

//             switch (decision) {
//                 case 1:
//                     number_classfier();
//                     break;
//                 case 2:
//                     number_summer();
//                     break;
//                 case 3:
//                     info();
//                     break;
//                 case 4:
//                     circumference_calculator();
//                     break;
//                 case 5:
//                     circumference_calculator();
//                     break;
//                 default:
//                     cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
//                     break;
//             }
//             cout << endl;
//         } else {
//             cout << "Invalid input. Please enter 'start' or 'quit'." << endl;
//         }
//     }

//     return 0;
// }
