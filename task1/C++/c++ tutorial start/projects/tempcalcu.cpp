#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes
double kelvinToCelsius;
double kelvin;
double kelvinToFahrenheit(double kelvin);
double celsiusToKelvin(double celsius);
double celsiusToFahrenheit(double celsius);
double fahrenheitToKelvin(double fahrenheit);
double fahrenheitToCelsius(double fahrenheit);

int main() {
    int choice;
    double temperature;

    cout << "Temperature Converter" << endl;
    cout << "1. Kelvin to Fahrenheit" << endl;
    cout << "2. Kelvin to Celsius" << endl;
    cout << "3. Fahrenheit to Kelvin" << endl;
    cout << "4. Fahrenheit to Celsius" << endl;
    cout << "5. Celsius to Kelvin" << endl;
    cout << "6. Celsius to Fahrenheit" << endl;
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    cout << "Enter the temperature: ";
    cin >> temperature;


    switch (choice) {
        case 1:
            cout << temperature << " K = " << kelvinToFahrenheit(temperature) << " °F" << endl;
            break;
        case 2:
            cout << temperature << " K = " << kelvinToCelsius(temperature) << " °C" << endl;
            break;
        case 3:
            cout << temperature << " °F = " << fahrenheitToKelvin(temperature) << " K" << endl;
            break;
        case 4:
            cout << temperature << " °F = " << fahrenheitToCelsius(temperature) << " °C" << endl;
            break;
        case 5:
            cout << temperature << " °C = " << celsiusToKelvin(temperature) << " K" << endl;
            break;
        case 6:
            cout << temperature << " °C = " << celsiusToFahrenheit(temperature) << " °F" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

// Conversion functions
double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double celsiusToFahrenheit(double celsius) {
    return celsius * 9.0 / 5.0 + 32;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0 + 273.15;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}
