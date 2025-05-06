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
    void displayCarDetails() const {
        cout << "Car Make: " << make << endl;
        cout << "Car Model: " << model << endl;
        cout << "Car Year: " << year << endl;
    }
};

int main() {
    // Creating an array of 3 Car objects with different details
    Car cars[3] = {
        Car("Toyota", "Corolla", 2022),
        Car("Honda", "Civic", 2021),
        Car("Ford", "Mustang", 2023)
    };

    // Displaying details of each car in the array
    for (int i = 0; i < 3; ++i) {
        cout << "\nCar " << i + 1 << " Details:" << endl;
        cars[i].displayCarDetails();
    }

    return 0;
}
