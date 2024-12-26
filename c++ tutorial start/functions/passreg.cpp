#include <iostream>
using namespace std;

// function prototype
void swap(int &x, int &y){
int z =x;
    x=y;
    y=z;

}


// The main function
int main() {
  int firstNum ;
  int secondNum ;

  cout << "Before swap: " << "\n";
  cin>> firstNum >> secondNum;
  cout << firstNum << secondNum << "\n";

  // Call the function, which will change the values of firstNum and secondNum
  swap(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  return 0;
}