#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string make;    // Private attribute for make
    string model;   // Private attribute for model
    int year;       // Private attribute for year

public:
    // Constructor to initialize car attributes
    Car(string carMake, string carModel, int carYear) {
        make = carMake;
        model = carModel;
        year = carYear;
    }

    // Method to display car details
    void displayCarDetails() {
        cout << "Car Make: " << make << endl;
        cout << "Car Model: " << model << endl;
        cout << "Car Year: " << year << endl;
    }
};

int main() {
    // Creating an object of the Car class with sample data
    Car car1("Toyota", "Corolla", 2022);

    // Displaying the details of the car
    car1.displayCarDetails();

    return 0;
}
