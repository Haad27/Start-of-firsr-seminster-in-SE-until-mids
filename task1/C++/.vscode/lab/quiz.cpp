# include <iostream>
using namespace std; 
int main (){
     int total,gradec,grade;
     double avergae;

     total=0;
     gradec=0;

     cin >> grade;

     while (grade!=0)
     {
        total = total + grade;
        gradec= gradec + 1;
        cin >> grade;
     }
     if (gradec!= 0)
     {
        avergae = static_cast<double >(total)/gradec
     }
     



}