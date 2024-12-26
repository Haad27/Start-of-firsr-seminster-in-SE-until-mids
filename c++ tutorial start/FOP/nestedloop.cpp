// #include <iostream>
// using namespace std;

// int main (){
//     int myNumbers[5] = {10, 20, 30, 40, 50};
// for (int i : myNumbers) {
//   cout << i << "\n";
// }
  #include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> names = {"ali", "ahmed", "shayan"};

    for (const string& name : names) {
        for (char c : name) {
            cout << c << endl;
        }
        cout << endl; // Print an extra newline to separate names
    }

    return 0;
}

    // for (int i = 1; i <=2 ; ++i)
    // {
    //    cout<<"outer"<<i<<"\n";

    //    for (int j = 1; j <=2; ++j)
    //    {
    //     cout<<"inner"<<j<<endl;

    //     for (int  a = 0; a <=5 ; a++)
    //     {
    //       cout<< "superset"<<a<<endl;
    //     }
        
    //    }
       
    // }
//     for (int i = 1; i <= 2; ++i) {
//   cout << "Outer: " << i << "\n"; // Executes 2 times

//   // Inner loop
//   for (int j = 1; j <= 3; ++j) {
//     cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
//   }
// }
    
