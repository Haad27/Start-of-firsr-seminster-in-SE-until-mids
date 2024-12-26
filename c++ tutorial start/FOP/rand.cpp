#include <iostream>
#include <cstdlib>
using namespace std;

int main (){

    srand(time(0));

// Generate a random number between 0 and 100
int randomNum = rand()  %100;

cout << randomNum;

}
