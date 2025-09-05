#include <iostream>
using namespace std;

int main() {
    // Variables for input
    double tankCapacity, milesPerGallon;
    int percentFull;

    // Prompt user for input
    cout << "Enter the capacity of the fuel tank in gallons: ";
    cin >> tankCapacity;

    cout << "Enter the miles per gallon for the vehicle: ";
    cin >> milesPerGallon;

    cout << "Enter the percentage to which the tank is filled (0-100): ";
    cin >> percentFull;

    // Calculate fuel remaining
    double fuelRemaining = tankCapacity * (percentFull / 100.0);

    // Calculate miles
    double miles = fuelRemaining * milesPerGallon;

    // Display result
    cout << "The vehicle can be driven " << miles << " miles on the remaining fuel." << endl;

    return 0;
}
