#include <iostream>
using namespace std;

int main (){
  int a;
  cout << "Enter your score: ";
  cin >> a;

  if (a % 3==0){
    cout<<"divisible by 3";

  }else if (a % 2==0) {
    cout<<"even" << endl;}
    else if (a % 2==1) {
    cout<<"odd";
  }

// if (a % 3==0){
//     cout<<"divisible by 3";
// if (a % 2==0){
//     cout<<"even";
// } else if (a % 2==1) {
//     cout<<"odd";
//   }else{
//     cout<<"error";
//   }
  
}
//   for(;;){
//   cout << "Enter your score: ";
//   cin >> a;
//   if (a > 0 && a<=100){
//     if (a>=90){
//         cout << "A";	

//     }else if (a>=80){
//         cout << "B";
//     }else if (a>=70){
//         cout << "C";
//     }else if (a>=60){
//         cout << "D";
//     }else if (a<60){
//         cout << "F";
//     }else{
//         cout << "error";
//     }
//      }

//   }



