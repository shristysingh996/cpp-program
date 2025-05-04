#include <iostream>
using namespace std;

// Function to generate Fibonacci series up to n terms
void generateFibonacci(int n) {
    int a = 0, b = 1, next;

    // Print the first two terms of the Fibonacci series
    cout << "Fibonacci Series up to " << n << " terms: ";
    
    for (int i = 1; i <= n; i++) {
        cout << a << " ";  
        
        next = a + b; 
        a = b;         
        b = next;      
    }
    cout << endl;
}

int main() {
    int n;
    
    // Input the number of terms
    cout << "Enter the number of terms: ";
    cin >> n;

    // Call the function to generate the Fibonacci series
    generateFibonacci(n);

    return 0;
}
