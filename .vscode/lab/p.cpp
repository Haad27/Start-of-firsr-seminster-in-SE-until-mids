#include <iostream>
using namespace std;

int main (){
    int x=1;
    int grade;
    int total=0 ;
    for (int i = 1; i <= 10; i++)
    {
      std ::  cout << "enter grade";
        cin >> grade ;
        total = grade + total;
    }
    
    double average = total / 10;
    std ::cout << "average is : " << average << endl ;

    return 0 ; 
}