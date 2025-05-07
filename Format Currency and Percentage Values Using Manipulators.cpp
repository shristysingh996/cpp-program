#include <iostream>
#include <iomanip>  // For formatting manipulators like std::fixed, std::setprecision

int main() {
    // Example values
    double price = 1234.567;
    double taxRate = 0.075;  // 7.5%
    double discount = 0.15;  // 15%

    // Formatting the price as currency
    std::cout << "Price: " << std::fixed << std::setprecision(2) << "$" << price << std::endl;

    // Formatting the tax rate as a percentage
    std::cout << "Tax Rate: " << std::fixed << std::setprecision(2) << taxRate * 100 << "%" << std::endl;

    // Calculating and displaying the price after tax and discount
    double taxAmount = price * taxRate;
    double discountAmount = price * discount;
    double finalPrice = price + taxAmount - discountAmount;

    std::cout << "Tax Amount: " << std::fixed << std::setprecision(2) << "$" << taxAmount << std::endl;
    std::cout << "Discount Amount: " << std::fixed << std::setprecision(2) << "$" << discountAmount << std::endl;
    std::cout << "Final Price after tax and discount: " << std::fixed << std::setprecision(2) << "$" << finalPrice << std::endl;

    // Formatting the discount rate as a percentage
    std::cout << "Discount Rate: " << std::fixed << std::setprecision(2) << discount * 100 << "%" << std::endl;

    return 0;
}
