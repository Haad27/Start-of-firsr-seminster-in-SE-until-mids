# include <iostream>
using namespace std;

int main (){
int age;
cout << "enter your age" << endl;
cin >> age;
if (age < 0 || age > 100){
    cout << "invalid age" << endl;
} else if (age >=13 && age <=19) {
    cout << "teenager" << endl;
}
else if (age < 13){

{
    cout << "child" << endl;
}}

 else if (age > 19){
    cout << "adult" << endl;
} else {
    cout << "enter correct " << endl;
}



}