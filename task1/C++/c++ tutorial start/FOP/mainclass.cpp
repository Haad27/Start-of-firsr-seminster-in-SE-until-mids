#include <iostream>
#include <string>
 using namespace std;

class Myclass{
    public:
     int numb;
     string mystring;
};

int main(){
    Myclass Obj;

    Obj.numb=134;
    Obj.mystring="Nice one OOPS";

    cout<<Obj.numb << "\n";
    cout<<Obj.mystring;

    return 0;

}