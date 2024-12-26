//   #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// int main() {
//     vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
//     cars.push_back("Tesla");
//     cars.push_back("VW"); 
//     cars.push_back("Mitsubishi");
//     cars.push_back("Mini");
//     cars.pop_back();
// // Print vector elements
// for (string car : cars) {
//   cout << car << "\n";
//   // for (char c : car)
//   //   cout << c << " "<<endl;
// }
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    cars.push_back("Tesla");
    cars.push_back("VW");
    cars.push_back("Mitsubishi");
    cars.push_back("Mini");
    cars.pop_back(); // Removes "Mini" from the vector

    // Print vector elements
    for (const string& car : cars) {
        cout << car << "\n";
        // for (char c : car)
        //     cout << c << " ";
        // cout << endl;
    }

    return 0;
}



// int main (){

//     vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// // Change the value of the first element
//     cars.at(0) = "Opel";

//     for (string car:cars){
//       cout << car;

//       return 0;
//     }
//     #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// int main() {
//     vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

//     // Change the value of the first element
//     cars.at(0) = "Opel";

//     for (const string& car : cars) {
//         cout << car << " ";
//     }
//     cout << endl;

//     return 0;
// }
//     // vector<string> names = {"ali","ahmed","shayaan"};
//     // for(string name:names){
//     //     // cout << name << endl;
//     //     for (char subname:name){
//     //         cout << subname << endl;
//     //     }
//     // }


// }