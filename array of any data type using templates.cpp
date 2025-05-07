#include <iostream>
using namespace std;

// Template function for linear search
template <typename T>
int linearSearch(const T arr[], int size, T key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            return i; // Key found at index i
        }
    }
    return -1; // Key not found
}
