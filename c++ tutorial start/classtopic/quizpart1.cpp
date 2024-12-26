#include <iostream>
using namespace std;

int main() {
    int lastnumber , firdstnumber,total;

    cout <<" enter last number" ;
    cin >> lastnumber;

    // while (true)
    // {
    //    cout << "enter firstnnumber";
    //    cin >> firdstnumber;

    //    if (firdstnumber==lastnumber)
    //    {
    //     break;
    //    }
      
    //     total = total + firdstnumber;
    // }
    //  cout << "total " << total + lastnumber;
    for(;;){

        cout << "ehnter firstnumber ";
        cin >> firdstnumber;

        if (firdstnumber==lastnumber)
        {
            break;
        }
        
          total+=firdstnumber;

    }

    
    cout << total;
    
}