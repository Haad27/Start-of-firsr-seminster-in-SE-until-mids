#include <iostream>
using namespace std;


int main (){
    // int x=0;
    // while (x<50){
    //     cout<<x<<endl;
    //     x++;
 
    // }
    // int y = 0 ;
    // do
    // {
    //    cout << y;
    //    y++;
    // } while (y<50);
    int x;
    cout << "which number table you want" ;
    cin>> x;
    cout << "table of " << x << endl;

    for ( int i=1 ; i<=10 ; i++)
    {
        cout <<endl << x<<"x"<<i<<"="<<(x*i);
    }
    


   
    return 0;
    

};
// #include <iostream>
// using namespace std;

// int main() {
//     int number;
    
//     cout << "Enter a number for its multiplication table: ";
//     cin >> number;
    
//     cout << "Multiplication table for " << number << ":" << endl;
    
//     for (int i = 1; i <= 10; i++) {
//         cout << number << " x " << i << " = " << (number * i) << endl;
//     }
    
//     return 0;
// }
