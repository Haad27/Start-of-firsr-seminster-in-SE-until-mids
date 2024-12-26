#include <iostream>

using namespace std;

int main(){
    int numcount=0;
    bool win = false;
    int d1,d2;
    while(true){
    cout<<"Enter a number of dice : ";
    cin >> d1;
    cout<<"Enter a number of dice : ";
    cin >> d2;

    if (d1 == 6 || d2 ==6)
    {
        "you rolled a 61 take another turn";
        numcount+=1;
    }
      else {
        break;
    }
    if (numcount>7)
    {
        win = true;
        cout << "congratukayions you win in turn count ";
    }else{
        cout << "you lose ";
    }
    
  
    

    }

}