#include <iostream>
using namespace std;

void convertTemperature(int kelvin) {
    float celsius = kelvin - 273.15;
    cout << "Temperature in Celsius: " << celsius << " °C" << endl;
}

int main() {
    int n;
    cout << "Conversion of Kelvin into Celsius" << endl;
    cout << "Enter the temperature in Kelvin: ";
    cin >> n;
    convertTemperature(n);
    return 0;
}
