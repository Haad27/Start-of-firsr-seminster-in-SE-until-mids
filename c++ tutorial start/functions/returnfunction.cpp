#include <iostream>
using namespace std;
int myfunction (int age )  {
    return 2023 - age ;
    }
string myfunction(string fname, int age) {
    cout << fname << endl << age << endl;
    return fname + " is " + to_string(age) + " years old";
}



int main (){
    
cout << myfunction(20);
// Then in main:
cout << myfunction("haad", 30) << endl;
// or 
int z=myfunction(2);
cout << z << endl;
return 0 ;


}