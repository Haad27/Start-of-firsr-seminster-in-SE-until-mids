#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int i,a,b,u=3,p=4;

    cout << "enter the vlaue pof i and a and b ";
    cin >> i >> a >>b ;

    int numerator = sqrt(u * pow(i,(a/b) * (i*i -1)));
    int denominator = sqrt (p * i - 2 ) + sqrt (p*i -1 );

    double result = numerator/denominator;

    cout << "the result is "<< result;
    


}