
//  #include <iostream>
//  using namespace std;
 
//  int main()
//  {
//  char string[]="Welcome to ScholarHat";
//  cout <<string;
//  }
#include <iostream>
#include <string>
 using namespace std;
class Carmodel{
    public :
     string name;
     string model;
     int  year;
};

int main() {
    Carmodel car;
    car.name="bmw";
    car.model="i8";
    car.year=2005;
    cout <<car.name<<"\n";
    cout <<car.model<<"\n";
    cout <<car.year<<"\n";


};