#include <iostream>
#include <chrono>  // for timing
using namespace std;
using namespace std::chrono;

// Macro to calculate square
#define SQUARE(x) ((x) * (x))

// Inline function to calculate square
inline int square(int x) {
    return x * x;
}

int main() {
    int num = 12345;
    const int iterations = 10000000;
    volatile int result = 0;  // prevent compiler optimization

    // Measure time using macro
    auto start_macro = high_resolution_clock::now();
    for (int i = 0; i < iterations; ++i) {
        result = SQUARE(num);
    }
    auto end_macro = high_resolution_clock::now();
    auto duration_macro = duration_cast<milliseconds>(end_macro - start_macro);
    cout << "Time taken by macro: " << duration_macro.count() << " ms" << endl;

    // Measure time using inline function
    auto start_inline = high_resolution_clock::now();
    for (int i = 0; i < iterations; ++i) {
        result = square(num);
    }
    auto end_inline = high_resolution_clock::now();
    auto duration_inline = duration_cast<milliseconds>(end_inline - start_inline);
    cout << "Time taken by inline function: " << duration_inline.count() << " ms" << endl;

    return 0;
}
