
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
   
    string cars[] = {"Volvo", "BMW", "Ford", "Mazda"};
cars[0] = "Opel";
for (string car:cars)
{
  cout << car << "\n";
}

// cout << cars[0];
 


}
