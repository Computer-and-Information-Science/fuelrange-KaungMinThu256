#include <iostream>
using namespace std;

int main() {
    
    double tankCapacity, milesPerGallon;
    int percentFull;

    cout << "Enter the capacity of the fuel tank in gallons: ";
    cin >> tankCapacity;

    cout << "Enter the miles per gallon for the vehicle: ";
    cin >> milesPerGallon;

    cout << "Enter the percentage to which the tank is filled (0-100): ";
    cin >> percentFull;


    double fuelRemaining = tankCapacity * (percentFull / 100.0);

    double miles = fuelRemaining * milesPerGallon;

    cout << "The vehicle can be driven " << miles << " miles on the remaining fuel." << endl;

    return 0;
}
