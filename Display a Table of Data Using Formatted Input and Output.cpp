#include <iostream>
#include <iomanip>  // For std::setw and other formatting manipulators

int main() {
    // Header for the table
    std::cout << std::left
              << std::setw(15) << "Product" 
              << std::setw(10) << "Quantity"
              << std::setw(10) << "Price"
              << std::setw(10) << "Total"
              << std::endl;
    
    // Sample data for the table
    std::string products[] = {"Apple", "Banana", "Carrot", "Date"};
    int quantities[] = {10, 20, 15, 8};
    double prices[] = {1.99, 0.99, 2.49, 3.59};

    // Loop through the data and print the table rows
    for (int i = 0; i < 4; ++i) {
        double total = quantities[i] * prices[i];  // Calculate total for each product
        
        std::cout << std::left
                  << std::setw(15) << products[i]
                  << std::setw(10) << quantities[i]
                  << std::setw(10) << std::fixed << std::setprecision(2) << prices[i]  // Format the price to 2 decimal places
                  << std::setw(10) << std::fixed << std::setprecision(2) << total
                  << std::endl;
    }

    return 0;
}
