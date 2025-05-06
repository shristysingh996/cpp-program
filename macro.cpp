#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

// Macro to find maximum of two numbers
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// Inline function to find maximum of two numbers
inline int maxInline(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 500, y = 1000;
    const int iterations = 10000000;
    volatile int result = 0;  // prevent compiler optimization

    // Time macro usage
    auto start_macro = high_resolution_clock::now();
    for (int i = 0; i < iterations; ++i) {
        result = MAX(x, y);
    }
    auto end_macro = high_resolution_clock::now();
    auto duration_macro = duration_cast<milliseconds>(end_macro - start_macro);
    cout << "Time taken by macro: " << duration_macro.count() << " ms" << endl;

    // Time inline function usage
    auto start_inline = high_resolution_clock::now();
    for (int i = 0; i < iterations; ++i) {
        result = maxInline(x, y);
    }
    auto end_inline = high_resolution_clock::now();
    auto duration_inline = duration_cast<milliseconds>(end_inline - start_inline);
    cout << "Time taken by inline function: " << duration_inline.count() << " ms" << endl;

    return 0;
}
