# include <iostream>
using namespace std;

int main (){
    int myage=18;
    int aliage=20;

    if (myage<=aliage){
        cout<<"i am bigger than ali";
    }else{
        cout<<"ali is bigger than me";
    };
    int time = 20;
if (time < 18) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}
//same code but bellow is more better
    int time = 20;
string result = (time < 18) ? "Good day." : "Good evening.";
cout << result;


    return 0;
};